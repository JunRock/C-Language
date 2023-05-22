//#include<Stdio.h>
//#include<stdlib.h>
//
//typedef int element;
//typedef struct Queue {
//	element data;
//	struct Queue *link;
//}Queue;
//
//typedef struct {
//	Queue *front, *rear;
//}ListQueue;
//
//void init(ListQueue *q)
//{
//	q->front = q->rear = NULL;
//}
//int empty(ListQueue *q)
//{
//	return (q->front == NULL);
//}
//void enqueue(ListQueue *p, element data)
//{
//	Queue *new = (Queue*)malloc(sizeof(Queue));
//	new->data = data;
//	new->link = NULL;
//	if (empty(p))
//	{
//		p->front = new;
//		p->rear = new;
//	}
//	
//	p->rear->link = new;
//	p->rear = new;
//}
//
//element dequeue(ListQueue *p)
//{
//	Queue *new = p->front;
//	element data;
//	p->front = p->front->link;
//	if (p->front == NULL)
//		p->rear == NULL;
//	data = new->data;
//	free(new);
//	return data;
//}
//
//int main()
//{
//	ListQueue head;
//	init(&head);
//	enqueue(&head, 10);
//	enqueue(&head, 20);
//	enqueue(&head, 30);
//	printf("%d->", dequeue(&head));
//	printf("%d->", dequeue(&head));
//	printf("%d->", dequeue(&head));
//	return 0;
//}