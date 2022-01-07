#include <iostream>
using namespace std;
int main()
{
	double a, b;
	cin >> a >> b;
	cout << "The perimeter of the rectangle is " << (a + b) * 2 << "cm" << endl;
	cout << "And it's surface area is " << a * b << "cm^2";
}