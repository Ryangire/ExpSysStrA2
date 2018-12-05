#include "stdafx.h"
#include <iostream>
#include <initializer_list>
#include <Windows.h>


int About = 0;
using namespace std;
void AbouT()
{
	cout << "\nВы хотите узнать: \n 1.О программе \n 2.Об авторе \n 3.Гл.Меню\n" << endl;
	cin >> About;
	if (About == 1)
	{
		SetColor(2);
		cout << "\nАльфа версия предназначенная для сдачи лабораторной работы\n" << endl;
		SetColor(15);
		AbouT();
	}
	else
		if (About == 2)
		{
			SetColor(3);
			cout << "Его зовут Pуслан..." << endl;
			cout << "\nВсё что я могу сказать:D\n" << endl;
			SetColor(15); AbouT();
		}
		else if (About != 1 && About != 2 && About != 3) {
			cout << "\nОй,ошибка!Попробуй еше раз\n" << endl; AbouT();
		}
}
