#include <iostream>
#include "calc.h"
using namespace std;

int main()
{
    cout << "Anna kaksi kokonaislukua:" << endl;
    int a = 0;
    int b = 0;
    cin >> a >> b;
    // Step 1
    cout << "Step 1" << endl;
    cout << "Summa    " << a << " + " << b << ": " << a + b << endl;
    cout << "Osamaara " << a << " / " << b << ": " << a / b << endl;

    // Step 2
    cout << "Step 2" << endl;
    cout << "Summa    " << a << " + " << b << ": ";
    calcSum(a, b);
    cout << endl;
    cout << "Osamaara " << a << " / " << b << ": ";
    calcDiv(a, b);
    cout << endl;

    // Step 3
    cout << "Step 3" << endl;
    cout << "Summa    " << a << " + " << b << ": " << retSum(a, b) << endl;
    cout << "Osamaara " << a << " / " << b << ": " << retDiv( a, b) << endl;
    return 0;
}
