#include<iostream>
#include<conio.h>
using namespace std;
//#define Logical_operators
//#define Control_structures
//#define While
#define While_do_while

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

#ifdef While
	int n;	//���������� ��������
	int i = 0;	//������� �����
	cout << "������� ���������� ��������: ";
	cin >> n;
	while (i < n)
		{
			cout << i << " Hello world" << endl;
			i++;
		}
#endif

#ifdef While_do_while
	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (key != 27);
#endif
}