#include <iostream>
using namespace std;

void foo() {
    int a = 0;
    static int b = 0;
    a++; b++;
    cout << a << " " << b << endl;
}

void clever() {
    static bool first = true;
    if (first) {
        cout << "You have called me for the first time!" << endl;
        first = false;
    }
    else
        cout << "You have called me before." << endl;
    
}

int main() {
    foo();
    foo();
    foo();
    clever();
    clever();
    clever();
    return 0;
}

    
