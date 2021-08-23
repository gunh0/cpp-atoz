#include <iostream>
using namespace std;

struct FuncObject
{
public:
	void operator() (int arg) const
	{
		cout << "���� : " << arg << endl;
	}

	void operator()(int arg1, int arg2) const
	{
		cout << "���� : " << arg1 << ',' << arg2 << endl;
	}

	void operator()(int arg1, int arg2, int arg3) const
	{
		cout << "���� : " << arg1 << ',' << arg2 << ',' << arg3 << endl;
	}
};

int main()
{
	FuncObject print;
	print(10);	// ��ü ���� �� ȣ�� (�Ͻ���)
	print(10, 20);
	print(10, 20, 30);
	cout << endl;

	print.operator()(10);	// ��ü ���� �� ȣ�� (�����)
	print.operator()(10, 20);
	print.operator()(10, 20, 30);
	cout << endl;

	FuncObject()(10);	// �ӽ� ��ü�� ȣ�� (�Ͻ���)
	FuncObject()(10, 20);
	FuncObject()(10, 20, 30);
	cout << endl;

	FuncObject().operator()(10);	// �ӽ� ��ü�� ȣ�� (�����)
	FuncObject().operator()(10, 20);
	FuncObject().operator()(10, 20, 30);

	return 0;
}