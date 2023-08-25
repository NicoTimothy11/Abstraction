#include <iostream>
#include <string>

using namespace std;

class Shape {
public:
	virtual void Draw() = 0;
};

class Square : public Shape {
public:
	void Draw() override {
		cout << "Square Created" << endl;
	}
};

class Triangle : public Shape {
public:
	void Draw() override {
		cout << "Triangle Created" << endl;
	}
};

class Circle : public Shape {
public:
	void Draw() override {
		cout << "Circle Created" << endl;
	}
};

int main() {
	Shape *ShapePtr;
	Square SqObj;

	ShapePtr = &SqObj;

	ShapePtr -> Draw();
	return 0;
}
