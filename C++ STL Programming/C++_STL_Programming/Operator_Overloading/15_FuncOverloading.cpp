#include <iostream>
using namespace std;

struct FuncObject
{
public:
	void operator()(int arg) const
	{
		cout << "Integer : " << arg << endl; // Output a single integer
	}

	void operator()(int arg1, int arg2) const
	{
		cout << "Integers : " << arg1 << ',' << arg2 << endl; // Output two integers
	}

	void operator()(int arg1, int arg2, int arg3) const
	{
		cout << "Integers : " << arg1 << ',' << arg2 << ',' << arg3 << endl; // Output three integers
	}
};

int main()
{
	FuncObject print;
	print(10); // Call using object instance (implicit)
	print(10, 20);
	print(10, 20, 30);
	cout << endl;

	print.operator()(10); // Call using object instance (explicit)
	print.operator()(10, 20);
	print.operator()(10, 20, 30);
	cout << endl;

	FuncObject()(10); // Call using temporary object (implicit)
	FuncObject()(10, 20);
	FuncObject()(10, 20, 30);
	cout << endl;

	FuncObject().operator()(10); // Call using temporary object (explicit)
	FuncObject().operator()(10, 20);
	FuncObject().operator()(10, 20, 30);

	return 0;
}
