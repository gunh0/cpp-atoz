#include <iostream>
using namespace std;

struct FuncObject
{
public:
	void operator()(int arg) const
	{
		cout << "Integer: " << arg << endl; // Prints the integer value
	}
};

void Print1(int arg)
{
	cout << "Integer: " << arg << endl; // Prints the integer value
}

int main()
{
	void (*Print2)(int) = Print1; // Pointer to function
	FuncObject Print3;			  // Function object

	Print1(10); // First, directly calling the function
	Print2(10); // Second, calling the function via function pointer
	Print3(10); // Third, calling the function via function object (invoking Print3.operator()(10))

	return 0;
}
