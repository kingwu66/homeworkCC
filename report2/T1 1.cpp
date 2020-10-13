#include<iostream>
#include"math.h"
using namespace std;
void findroot(const float* a, const float* b, const float* c)
{
	float disc, x1, x2, realpart, imagpart;
	disc = (*b) * (*b) - 4 * (*a) * (*c);
	if (disc >= 0)
	{
		x1 = (-(*b) + sqrt(disc)) / (2 * (*a));
		x2 = (-(*b) - sqrt(disc)) / (2 * (*a));
		cout << "has distinct real roots:x1=" << x1 << "x2=" << x2 << endl;
	}
	else
	{
		realpart = -(*b) / (2 * (*a));
		imagpart = sqrt(-disc) / (2 * (*a));
		printf_s("%f+%fi\n", realpart, imagpart);
		printf_s("%f-%fi\n", realpart, imagpart);
	}


}

int main()
{
	void findroot(const float* p1, const float* p2, const float* p3);
	float a, b, c;//a为二次项系数，b为一次项系数，c为常数项

	cin >> a >> b >> c;

	const float* p1 = &a;
	const float* p2 = &b;
	const float* p3 = &c;
	findroot(p1, p2, p3);//引用函数
	return 0;
}
