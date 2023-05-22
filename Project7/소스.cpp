#include<iostream>
using namespace std;
class A {
	
public:
	int x;
	A() { x = 0; }
	A(int x) { this->x = x; cout << x << endl; }
	int getA() { return x; }
};
class B :public A {
	int y;
public:
	B(int x, int y):A(x+5) {
		this->y = y;
		cout << y << endl;
	}
	int getY() { return y; }
};
class C :public B {
	
public:
	int m;
	C(int x, int y, int z) :B(x, y) { m = this->x * y*z;
	cout << this->x << endl;
	cout << y << endl;
	cout << z << endl;
	}
	int getm() { return m; }
};

int main(void) {
	C c(3, 5, 2);
	cout << c.m<< endl;
}