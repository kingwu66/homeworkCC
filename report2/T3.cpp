#include<iostream>
#include"math.h"
using namespace std;
int main()
{
	int year, month, day, leap;
	cin >> year >> month >> day;
	int number;
	double week;//number�ڼ��죬week����
	if ((year % 4 == 0 && year % 100 == 0) || (year % 400 == 0))/*�ж�year�Ƿ�Ϊ����*/
		leap = 1;
	else
		leap = 0;
	int i = 0, j = 0, k;//iΪ31����·ݣ�jΪ30����·ݣ�kΪ�·ݵĸ���
	int number2 = 0;//���·�����
	for (k = 1; k < month; k++)
	{
		if ((k == 1) || (k == 3) || (k == 5) || (k == 7) || (k == 8) || (k == 10) || (k == 12))
			i++;
		else if (k == 2)
		{
			if (leap == 1)
				number2 = 29;
			else
				number2 = 28;
		}
		else
			j++;
	}
	number = 31 * i + number2 + 30 * j+day;
	week = ceil(number / 7.0);
	cout << "������" << number << "������"<<week<<endl;

	system("pause");
	return 0;
}