#include "stdafx.h"
#include <iostream>
#include <initializer_list>
#include <Windows.h>
int MaidCafeSel = 0;

using namespace std;
void Cafe()
{
	int a = rand() % 10 + 0;
	cout << " Добро пожаловать в MaidCafe! \n Он работает с 10:00 до 20:00 \n Сделайте выбор: \n 1.О кафе  \n 2.Бронирование столов \n 3.Назад\n\n\n" << endl;
	cin >> MaidCafeSel;
	if (MaidCafeSel == 1) {
		SetColor(3);
		cout << "Данное место специально построенное и обустроенное \nпомещение для тех,кто любит наслаждатся вкусным кофе и различными вкусняшками." << endl;
		SetColor(4);
		cout << "Как только вы зайдете в это кафе, вы заметите как изменилось время, как будто вы стали независимы от времени." << endl;
		SetColor(5);
		cout << "Наш коллектив вас приятно удивит своим отношением и подходом к Нашим дорогим клиентам  " << endl; SetColor(15); Cafe();
	}
	else if (MaidCafeSel == 2) {
		SetColor(6); cout << "Сейчас достпуно "; cout << a;
		if (a == 1) { cout << " стол\n\n" << endl; }
		else if (2 <=a && a<= 4) { cout << " стола\n\n" << endl; }
		else {cout << " столов\n\n" << endl;}Cafe();}
}
