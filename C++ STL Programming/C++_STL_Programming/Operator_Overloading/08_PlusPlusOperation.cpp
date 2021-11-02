#include <iostream>

using namespace std;

class Point
{
	int x;
	int y;

public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	void Print() const { cout << x << ',' << y << endl; }

	const Point &operator++() // Prefix increment
	{
		++x;
		++y;
		return *this;
	}

	const Point operator++(int) // Postfix increment
	{
		Point pt(x, y);
		++x; // Increase the current object's x and y, then return the value before the increment.
		++y;
		return pt;
	}
};

int main()
{
	Point p1(2, 3), p2(2, 3);
	Point result;

	result = ++p1; // Calls p1.operator++();
	p1.Print();
	result.Print();

	result = p2++; // Calls p2.operator++(0);
	p2.Print();
	result.Print();

	return 0;
}
