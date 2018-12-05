#include "stdafx.h"
#include <iostream>
#include <initializer_list>
#include <Windows.h>
#include "Color.h"
#include "Cafe.h"
#include "About.h"


using namespace std;
int MaidMenuSel = 0;
void main()
{
	SetColor(15);
	setlocale(0, "");
	cout << "Добро пожаловать в Альфа версию программы MaidNet! \n Сделайте выбор: \n 1.Кафе MaidCafe \n 2.О программе \n 3.Выход" << endl;
	cin >> MaidMenuSel;
	if (MaidMenuSel == 1) { Cafe(); if (MaidCafeSel == 3) { main(); } }
	else if (MaidMenuSel == 2) { AbouT(); if (About == 3) { main(); } }
	else if (MaidMenuSel = 3) {
		cout << "\nЖдем вашего возвращения!\n" << endl; 
	}
	else {
		cout << "\nОй,ошибка!Попробуй еше раз\n" << endl; main();
	}
}


