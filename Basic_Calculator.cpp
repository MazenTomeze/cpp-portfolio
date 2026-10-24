#include <iostream>
using namespace std;

int main()
{
    double a;
    double b;
    char ma;
    cout << "Enter first num" << endl;
    cin >> a;

    cout << "EnterThe arithmetic operation" << endl;
    cout << "+" << endl;
    cout << "-" << endl;
    cout << "*" << endl;
    cout << "/" << endl;
    cin >> ma;

    cout << "Enter second num" << endl;
    cin >> b;

    if (ma == '+') {
        cout << "The result " << a + b;
    }
    else if (ma == '-')
    {
        cout << "The result " << a - b;
    }


    else if (ma == '*')
    {
        cout << "The result " << a * b;
    }


    else if (ma == '/')
    {
        cout << "The result " << a / b;
    }
    return 0;
}