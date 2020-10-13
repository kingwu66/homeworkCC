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
	float a, b, c, S;//三角形的边
	cin >> a >> b >> c;
	float l;//中间量
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
		cout << "面积为" << S << endl;
	}
	else
		cout << "a,b,c不可以组成三角形" << endl;
	return 0;
}