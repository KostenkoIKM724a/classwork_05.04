#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a value in integer variable a: ";
    cin >> a;

    int* pa;
    pa = &a;

    cout << "The program adds '13' to your inputed number";
    *pa += 13;

    cout << "Value of the variable a: " << a << endl;
}
