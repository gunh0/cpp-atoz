#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;

public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	void Print() const { cout << x << ',' << y << endl; } // Prints the point's coordinates

	int operator[](int idx) const
	{
		if (idx == 0)
			return x; // Return x if index is 0
		else if (idx == 1)
			return y; // Return y if index is 1
		else
			throw "Error!"; // Throw an error if index is neither
	}
};

int main()
{
	Point pt(1, 2);		   // Create a Point object
	pt.Print();			   // Print the point's coordinates
	cout << pt[0] << ','   // Call pt.operator[](0)
		 << pt[1] << endl; // Call pt.operator[](1)

	return 0;
}
