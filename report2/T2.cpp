#include<iostream>
#include<iostream>
using namespace std;
double findS(const float* a, const float* b, const float* c)
{
	double p = (*a + *b + *c) / 2.0;
	double S = sqrt(p * (p - *a) * (p - *b) * (p - *c));
	return S;
}

int main()
{
	float a, b, c, S;//�����εı�
	cin >> a >> b >> c;
	float l;//�м���
	if (a > b)
	{
		l = a;
		a = b;
		b = l;
	}
	if (b > c)
	{
		l = b;
		b = c;
		c = l;
	}
	if (a > c)
	{
		l = a;
		a = c;
		c = l;
	}
	if (c > (a + b))
	{
		const float* p1 = &a;
		const float* p2 = &b;
		const float* p3 = &c;
		S = findS(p1, p2, p3);
		cout << "���Ϊ" << S << endl;
	}
	else
		cout << "a,b,c���������������" << endl;
	return 0;
}