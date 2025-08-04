#include <iostream>
using namespace std;

void passByValue(int a) // passed the copy of the value and original value doesn't affect on change
{
    a = 100;
    cout<< "value of  a: " << a << endl;
}

void passByReference(int &b) // passed the reference and original value affect by change
{
    b = 100;
    cout << "value of  b: " << b << endl;
}

int main()
{
    int x = 10;

    passByValue(x);
    cout << "After passByValue, x = " << x << endl; // ❌ x won't change

    passByReference(x);
    cout << "After passByReference, x = " << x << endl; // ✅ x will change
}
