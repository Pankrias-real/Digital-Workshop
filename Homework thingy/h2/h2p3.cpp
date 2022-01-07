#include <iostream>
using namespace std;
int main()
{
    double speed;
    cin >> speed;
    if (speed < 0)
    {
        cout << "Invalid input!" << endl;
    }
    else if (speed <= 10)
    {
        cout << "snal" << endl;
    }
    else if (speed <= 50)
    {
        cout << "Pretty decent" << endl;
    }
    else if(speed <= 150)
    {
        cout << "Hayai!" << endl;
    }
    else if (speed <= 1000)
    {
        cout << "Night's on fire" << endl;
    }
    else
    {
        cout << "Deja vu!" << endl;
    }
}
