/*
*/
#include <iostream>
class Point {
private:
public:
	int x, y;
	Point(int ax = 0, int ay = 0) : x(ax), y(ay) {
		printf("constructor call\n");
	}
	Point(const Point& other) {
		printf("copy constructor call\n");
		this->x = other.x;
		this->y = other.y;
	}
	const Point& add(const Point& other) {
		return Point(x + other.x, y + other.y);
	}
	void showPoint() {
		printf("x: %d, y: %d\n", x, y);
	}
};

int main()
{
	Point obj1(10, 20);
	obj1.showPoint();
	Point obj2(obj1);
	obj2.showPoint();
	Point obj3;
	obj3 = obj1.add(obj2);
	obj3.showPoint();

	return 0;
}