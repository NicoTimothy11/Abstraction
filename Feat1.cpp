
int main() {
	Shape *ShapePtr;
	Circle CirObj;

	ShapePtr = &CirObj;

	ShapePtr -> Draw();
	return 0;