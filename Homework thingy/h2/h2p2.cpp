#include <iostream>
using namespace std;
int main()
{
	double num;
	cin >> num;
	if (num < 100)
	{
		cout << "Less than 100" << endl;
	}
	else if (num > 200)
	{
		cout << "Greater than 200" << endl;
	}
	else
	{
		cout << "Between or equal to 100 and 200";
	}
}
