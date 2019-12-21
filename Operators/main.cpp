#include<iostream>
using namespace std;
//#define Logical_operators
//#define Control_structures
#define If_else

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

#ifdef If_else
	int n;	//Количество итерацый
	int i = 0;	//Счётчик цыкла
	cout << "Введите количество итерацый: ";
	cin >> n;
	while (i < n)
		{
			cout << i << " Hello world" << endl;
			i++;
		}

#endif
}