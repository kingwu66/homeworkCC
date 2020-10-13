#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;

}
 int main()
{
	int a, b;
	cin >> a >> b;
	int *p1 = &a;
	int *p2 = &b;
	swap(p1, p2);
	cout << a <<" " <<b << endl;
	return 0;
}