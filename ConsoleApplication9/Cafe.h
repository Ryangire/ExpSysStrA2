#include "stdafx.h"
#include <iostream>
#include <initializer_list>
#include <Windows.h>
int MaidCafeSel = 0;

using namespace std;
void Cafe()
{
	int a = rand() % 10 + 0;
	cout << " ����� ���������� � MaidCafe! \n �� �������� � 10:00 �� 20:00 \n �������� �����: \n 1.� ����  \n 2.������������ ������ \n 3.�����\n\n\n" << endl;
	cin >> MaidCafeSel;
	if (MaidCafeSel == 1) {
		SetColor(3);
		cout << "������ ����� ���������� ����������� � ������������ \n��������� ��� ���,��� ����� ����������� ������� ���� � ���������� �����������." << endl;
		SetColor(4);
		cout << "��� ������ �� ������� � ��� ����, �� �������� ��� ���������� �����, ��� ����� �� ����� ���������� �� �������." << endl;
		SetColor(5);
		cout << "��� ��������� ��� ������� ������ ����� ���������� � �������� � ����� ������� ��������  " << endl; SetColor(15); Cafe();
	}
	else if (MaidCafeSel == 2) {
		SetColor(6); cout << "������ �������� "; cout << a;
		if (a == 1) { cout << " ����\n\n" << endl; }
		else if (2 <=a && a<= 4) { cout << " �����\n\n" << endl; }
		else {cout << " ������\n\n" << endl;}Cafe();}
}
