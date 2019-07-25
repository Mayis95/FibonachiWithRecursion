#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void Fibonachi(int i1, int i2, int length);

int main()
{
	int a, b, length;
	cout << "Enter first 2 digits: ";
	cin >> a >> b;
	cout << endl << "Enter length: ";
	cin >> length;
	Fibonachi(a, b, length);
	system("pause");
	return 0;
}

void Fibonachi(int i1, int i2, int length)
{
	cout << i1 + i2 << ' ';
	if (length == 0)
		return;
	Fibonachi(i2, i1 + i2, --length);
}