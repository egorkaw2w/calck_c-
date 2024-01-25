// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	std::cout << "Ето калькулятор\n";
	while (true)
	{
		int x, y;
		char symb;

		//--------------------------------------------//
		cout << " + - сложение  - - вычитание  * - умножение";
		cout << " / - деление  s - возведение в степень \t q - нахождение квадратного корня";
		cout << " % - нахождение 1% от числа  f - найти факториал числа  b - выход \n";
		//-------------------------------------------//

		cout << "Введите действие: ";
		cin >> symb;
		if (symb == '+')
		{
			cout << "введите первое число: ";
			cin >> x;
			cout << "Введите второе число: ";
			cin >> y;
			cout << x + y;
			cout << "\n";
		}
		else if (symb == '-')
		{
			cout << "введите первое число: ";
			cin >> x;
			cout << "Введите второе число: ";
			cin >> y;
			cout << x - y;
			cout << "\n";
		}
		else if (symb == '*')
		{
			cout << "введите первое число: ";
			cin >> x;
			cout << "Введите второе число: ";
			cin >> y;
			cout << x * y;
			cout << "\n";
		}
		else if (symb == '/')
		{
			cout << "введите первое число: ";
			cin >> x;
			cout << "Введите второе число: ";
			cin >> y;
			cout << x / y;
			cout << "\n";
		}
		else if (symb == 's') {
			cout << "введите первое число: ";
			cin >> x;
			cout << "Введите второе число: ";
			cin >> y;
			cout << pow(x, y);
			cout << "\n";
		}
		else if (symb == 'q') {
			cout << "введите первое число: ";
			cin >> x;
			cout << sqrt(x);
			cout << "\n";
		}
		else if (symb == '%') {
			cout << "введите первое число: ";
			cin >> x;
			cout << (float)x / 100;
			cout << "\n";
		}
		else if (symb == 'f')
		{
			cout << "введите первое число: ";
			cin >> x;
			int res = 1;
			for (int i = 1; i <= x; i++)
			{
				res *= i;
			}
			cout << res;
			cout << '\n';
		}
		else if (symb != 'b') {
			cout << "пака :(";
			break;
		}


	}
}

