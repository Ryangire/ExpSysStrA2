#include "stdafx.h"
#include <iostream>
#include <initializer_list>
#include <Windows.h>


int About = 0;
using namespace std;
void AbouT()
{
	cout << "\n�� ������ ������: \n 1.� ��������� \n 2.�� ������ \n 3.��.����\n" << endl;
	cin >> About;
	if (About == 1)
	{
		SetColor(2);
		cout << "\n����� ������ ��������������� ��� ����� ������������ ������\n" << endl;
		SetColor(15);
		AbouT();
	}
	else
		if (About == 2)
		{
			SetColor(3);
			cout << "��� ����� P�����..." << endl;
			cout << "\n�� ��� � ���� �������:D\n" << endl;
			SetColor(15); AbouT();
		}
		else if (About != 1 && About != 2 && About != 3) {
			cout << "\n��,������!�������� ��� ���\n" << endl; AbouT();
		}
}
