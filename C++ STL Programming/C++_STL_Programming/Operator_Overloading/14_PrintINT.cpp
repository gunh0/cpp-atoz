#include <iostream>
using namespace std;

struct FuncObject
{
public:
	void operator()(int arg) const
	{
		cout << "���� : " << arg << endl;
	}
};

void Print1(int arg)
{
	cout << "���� : " << arg << endl;
}

int main()                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
{
	void (*Print2)(int) = Print1;
	FuncObject Print3;

	Print1(10);	// ù°, '�Լ�'�� ����� ���� ���
	Print2(10);	// ��°, '�Լ� ������'�� ����� ���� ���
	Print3(10);	// ��°, '�Լ� ��ü'�� ����� ���� ��� (Print3.operator(10)�� ����)

	return 0;
}