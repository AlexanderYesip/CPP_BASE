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
	cout << "Введите температуру воздуха: ";
	cin >> t;
	if (t > 20)
	{
		cout << "Жарко";
	}
	else if (t > 10)
	{
		cout << "Тепло";
	}
	else if (t > 0)
	{
		cout << "Холодно";
	}
	else if (t > -10)
	{
		cout << "Мороз";
	}
	else
	{
		cout << "Вы на северном полюсе";
	}
#endif
}