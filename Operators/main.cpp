#include<iostream>
using namespace std;
//#define Logical_operators
#define Control_structures

void main()
{
	setlocale(LC_ALL, "");

#ifdef Logical_operators
	//	!	-	NOT
	cout << (!true == false) << endl;
	//	||	-	OR
	cout << (false || true || false) << endl;
	//	&&	-	AND
	cout << (true && true && true) << endl;
#endif

#ifdef Control_structures
	int t;
	cout << "������� ����������� �������: ";
	cin >> t;
	if (t > 20)
	{
		cout << "�����";
	}
	else if (t > 10)
	{
		cout << "�����";
	}
	else if (t > 0)
	{
		cout << "�������";
	}
	else if (t > -10)
	{
		cout << "�����";
	}
	else
	{
		cout << "�� �� �������� ������";
	}
#endif
}