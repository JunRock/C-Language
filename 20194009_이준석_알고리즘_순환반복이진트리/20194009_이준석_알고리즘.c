/*
	작성일: 2022.09.30
	작성자: 이준석
	프로그램명: 순환,반복을 이용한 이진트리 및 시간측정
*/

#include<stdio.h>
#include<stdlib.h> //동적할당을 위해 stdlib.h헤더파일 선언
#include<time.h> //시간측정을 하기 위해 time.h헤더파일 선언
#define SIZE 32500 //스택 사이즈를  32500으로 할당
int top = -1; //스택의 인덱스를 가리키는 변수

typedef struct TreeNode { //TreeNode 구조체 선언
	int data;
	struct TreeNode* left, *right; //왼쪽 서브트리, 오른쪽 서브트리를 가리키기 위한 자기참조 포인터변수 선언
}TreeNode;

TreeNode* stack[SIZE]; //TreeNode형의 stack포인터배열 선언

TreeNode* new_node(int item) { //새로운 노드를 생성하는 함수
	TreeNode* temp = (TreeNode*)malloc(sizeof(TreeNode)); //temp노드를 동적으로 생성
	temp->data = item; //temp의 data 값에 인자로 받은 item 초기화
	temp->left = temp->right = NULL; //temp의 왼쪽 서브트리 및 오른쪽 서브트리를 NULL로 초기화
	return temp; //temp반환
}

TreeNode* insert_node(TreeNode* node, int key) { //노드 삽입 함수
	if (node == NULL) return new_node(key); //노드에 아무것도 없으면 new_node함수에 key값을 인자로 전달

	if (key < node->data) //node의 data값이 새로운 노드의 key값보다 클 경우
		node->left = insert_node(node->left, key); //재귀를 이용하여 node->left에 초기화
	else if (key > node->data) //node의 data값이 새로운 노드의 key값보다 작을 경우
		node->right = insert_node(node->right, key);  //재귀를 이용하여 node->right에 초기화

	return node; //node값 반환
}

void push(TreeNode* p) { //스택배열에 값을 넣는 push함수
	if (top < SIZE - 1) //스택에 공간이 남아있는 경우
		stack[++top] = p;
}

TreeNode* pop() { //스택배열에 있는 값을 빼는 pop함수
	TreeNode* p = NULL; //TreeNode 포인터변수를 NULL로 초기화
	if (top >= 0) //스택배열이 비워져있지 않은 경우
		p = stack[top--]; //p에 stack배열의 값을 초기화
	return p; //p반환
}

//순환
void inorder(TreeNode* node) { //순환 중위순회 함수(LVR)
	if (node) { //노드가 참일 경우
		inorder(node->left); //노드의 왼쪽 서브트리 먼저 순회
		printf("[%d] ", node->data); //노드 데이터 출력
		inorder(node->right); //노드의 오른쪽 서브트리 순회
	}
}

void preorder(TreeNode* node) { //순환 전위순회 함수(VLR)
	if (node) { //노드가 참일 경우
		printf("[%d] ", node->data); //노드 데이터 출력
		preorder(node->left); //노드의 왼쪽 서브트리 순회
		preorder(node->right); //노드의 오른쪽 서브트리 순회
	}
}

void postorder(TreeNode* node) { //순환 후위순회 함수(LRV)
	if (node) { //노드가 참일 경우
		postorder(node->left); //노드 왼쪽 서브트리 순회
		postorder(node->right); //노드 오른쪽 서브트리 순회
		printf("[%d] ", node->data); //노드 데이터 출력
	}
}

//반복이진트리
void insert_node_iter(TreeNode** node, int key) { //반복을 이용한 삽입함수
	TreeNode* p, *t, *n; //p는 부모노드, t는 현재노드, n은 새로운 노드

	t = *node;
	p = NULL;
	while (t != NULL) {
		if (key == t->data) return; //만약 노드에 이미 데이터가 존재한 경우 중지
		p = t; //p는 t의 부모노드
		if (key < t->data) //인자로 받은 key값이 t의 data보다 작을 경우
			t = t->left; //t노드를 t의 왼쪽 서브트리로 이동
		else //인자로 받은 key값이 t의 data보다 클 경우
			t = t->right; //t노드를 t의 오른쪽 서브트리로 이동
	}
	n = (TreeNode*)malloc(sizeof(TreeNode)); //새로운노드 n을 동적할당
	if (n == NULL) return; //동적할당이 실패한 경우

	n->data = key; //n노드의 data에 key값 초기화
	n->left = n->right = NULL; //n노드의 왼쪽과 오른쪽 서브트리를 NULL로 초기화

	if (p != NULL) { //p가 NULL이 아닌경우
		if (key < p->data) //만약 p노드의 data값이 인자로 받은 key값보다 클 경우
			p->left = n; //p노드의 왼쪽 서브트리에 새로운 노드 n을 초기화
		else //만약 p노드의 data값이 인자로 받은 key값보다 작을 경우
			p->right = n; //p노드의 오른쪽 서브트리에 새로운 노드 n을 초기화
	}
	else //노드가 비워있을때
		*node = n; //노드를 n노드로 초기화
}

void inorder_iter(TreeNode* node) { //반복을 이용한 중위순회 함수

	while (1) {
		for (; node; node = node->left) //노드의 왼쪽 서브트리로 이동
			push(node); //노드의 왼쪽 서브트리들을 push

		node = pop();

		if (!node) break; //노드가 참이 아닐경우 반복종료
		printf("[%d] ", node->data); //노드의 데이터 값 출력
		node = node->right; //노드를 노드의 오른쪽 서브트리로 초기화
	}
	printf("\n");
}

int MAX(int a, int b) { //get_height함수에서 최대값을 구하기 위한 함수
	if (a > b) return a;
	else
		return b;
}

int get_count_node(TreeNode* node) { //노드개수 구하는 함수
	int count = 0;
	if (node != NULL) { //노드가 NULL이 아닐경우
		count = 1 + get_count_node(node->left) + get_count_node(node->right); //각각의 서브트리에 대한 순환호출 후, 반환되는 값에 1더함
	}
	return count; //count변수 반환
}

int get_height(TreeNode* node) { //트리의 높이를 구하는 함수
	int height = 0;
	if (node != NULL) { //노드가 NULL이 아닌경우
		height = 1 + MAX(get_height(node->left), get_height(node->right));// 각 서브트리에 대한 순환호출 후
		// MAX를 이용해 반환값중 최대값 리턴
	}
	return height; //height변수 반환
}

int get_leaf_count(TreeNode* node) { //단말노드의 개수를 구하는 함수
	int count = 0;
	if (node != NULL) { //노드가 NULL이 아닌 경우
		if (node->left == NULL && node->right == NULL) //단말노드는 자식노드가 없는 노드
			return 1; //단말노드이면 1을 반환
		else
			count = get_leaf_count(node->left) + get_leaf_count(node->right); //비단말노드일 경우 각 서브트리에 대한 순환호출 후
		// 반환되는 값을 더함
	}
	return count;
}

int main() {
	FILE* fp = fopen("data.txt", "r"); //파일포인터 선언 후 파일 open
	int temp;
	clock_t start, end; //시간을 측정하기 위한 변수
	double duration = 0; //걸린시간을 확인하는 변수

	int count = 0;

	TreeNode* node1 = NULL; //순환순회를 위한 노드
	TreeNode* node2 = NULL; //반복순회를 위한 노드

	if (fp == NULL) { //파일이 존재하지 않는 경우
		printf("파일을 찾을 수 없습니다.");
		return 0;
	}
	//순환삽입
	start = clock();
	while (!feof(fp)) {
		fscanf(fp, "%d", &temp);
		node1 = insert_node(node1, temp); //파일에서 읽은 데이터값을 순환을 이용하여 insert 
	}
	end = clock();
	duration = end - start;
	printf("순환삽입 걸린시간: %lf\n\n", duration / 1000);

	rewind(fp); //반복삽입을 위해 파일포인터fp를 파일의 시작점으로 이동

	//반복삽입
	start = clock();
	while (!feof(fp)) {
		fscanf(fp, "%d", &temp);
		insert_node_iter(&node2, temp); //파일에서 읽은 데이터값을 반복을 이용한 insert
	}
	end = clock();
	duration = end - start;
	printf("반복삽입 걸린시간: %lf\n\n\n", duration / 1000);

	//순환을 이용한 순회
	start = clock();
	printf("<중위순회>\n");
	inorder(node1); //순환 중위순회 함수 호출
	printf("\n");
	end = clock();
	duration = end - start;
	printf("순환 중위순회 걸린시간: %lf\n\n\n", duration / 1000);

	start = clock();
	printf("<전위순회>\n");
	preorder(node1); //순환 전위순회 함수 호출
	printf("\n");
	end = clock();
	duration = end - start;
	printf("순환 전위순회 걸린시간: %lf\n\n\n", duration / 1000);

	start = clock();
	printf("<후위순회>\n");
	postorder(node1);//순환 후위순회 함수 호출
	printf("\n");
	end = clock();
	duration = end - start;
	printf("순환 후위순회 걸린시간: %lf\n\n\n", duration / 1000);
	printf("\n");
	printf("\n");
	printf("\n");



	//반복을 이용한 순회
	start = clock();
	printf("<반복중위순회>\n");
	inorder_iter(node2); //반복을 이용한 중위순회
	end = clock();
	duration = end - start;
	printf("반복 중위순회 걸린시간: %lf\n\n\n", duration / 1000);
	printf("\n");
	printf("\n");
	printf("\n");

	count = get_count_node(node1); //노드의 개수를 파악
	printf("전체 노드의 개수: %d\n\n", count);

	count = get_height(node1); //트리의 높이를 파악
	printf("트리의 높이: %d\n\n", count);

	count = get_leaf_count(node1); //단말노드의 개수 파악
	printf("단말노드의 개수: %d\n\n", count);
	free(node1); //node1동적할당 해제
	free(node2); //node2동적할당 해제
	fclose(fp); //파일 닫음
	return 0;
}