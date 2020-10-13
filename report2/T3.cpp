#include<iostream>
#include"math.h"
using namespace std;
int main()
{
	int year, month, day, leap;
	cin >> year >> month >> day;
	int number;
	double week;//number第几天，week周数
	if ((year % 4 == 0 && year % 100 == 0) || (year % 400 == 0))/*判断year是否为闰年*/
		leap = 1;
	else
		leap = 0;
	int i = 0, j = 0, k;//i为31天的月份，j为30天的月份，k为月份的个数
	int number2 = 0;//二月份天数
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
	cout << "天数：" << number << "周数："<<week<<endl;

	system("pause");
	return 0;
}