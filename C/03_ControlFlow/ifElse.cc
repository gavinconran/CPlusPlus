#include <iostream>
using namespace std;

int main() {
    int a,b;

    cout << "Enter two integers : ";
    cin >> a >> b;
    if (a < b)
        cout << "The smaller number is a = " << a << endl;
    else if (b < a)
        cout << "The smaller number is b = " << b << endl;
    else
        cout << "The numbers are equal a = b = " << a << endl;

    return 0;
}


