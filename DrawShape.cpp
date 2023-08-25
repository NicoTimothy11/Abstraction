#include <iostream>
#include <string>

using namespace std;

class Base {
public:
	virtual void show() {
		cout << "Virtual func" << endl;
	}
};

class Derived : public Base {
public:
	void show() override {
		cout << "Derived class function" << endl;
	}
};

int main() {
	Base *basePtr;
	Derived derObj;

	basePtr = &derObj;

	basePtr -> show();
	return 0;
}
