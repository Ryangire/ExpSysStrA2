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
	cout << "����� ���������� � ����� ������ ��������� MaidNet! \n �������� �����: \n 1.���� MaidCafe \n 2.� ��������� \n 3.�����" << endl;
	cin >> MaidMenuSel;
	if (MaidMenuSel == 1) { Cafe(); if (MaidCafeSel == 3) { main(); } }
	else if (MaidMenuSel == 2) { AbouT(); if (About == 3) { main(); } }
	else if (MaidMenuSel = 3) {
		cout << "\n���� ������ �����������!\n" << endl; 
	}
	else {
		cout << "\n��,������!�������� ��� ���\n" << endl; main();
	}
}


