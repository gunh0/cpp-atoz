#include <iostream>

using namespace std;

class Point
{
	int x;
	int y;

public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	void Print() const { cout << x << ',' << y << endl; }

	const Point &operator--() // Prefix decrement
	{
		--x;		  // Decrement x
		--y;		  // Decrement y
		return *this; // Return the decremented object
	}

	const Point operator--(int) // Postfix decrement
	{
		Point pt(x, y); // Create a temporary object with current x and y
		--x;			// Decrement x. Postfix requires decrement after value is used.
		--y;			// Decrement y.
		return pt;		// Return the original value before decrement
	}
};

int main()
{
	Point p1(2, 3), p2(2, 3);
	Point result;

	result = --p1; // Calls prefix decrement on p1
	p1.Print();
	result.Print();

	result = p2--; // Calls postfix decrement on p2
	p2.Print();
	result.Print();

	return 0;
}
