#include <iostream>
using namespace std;

int main() {
    int i;
    int *ip;

    i = 5;
    ip = &i;

    cout << "The value of i is " << *ip << endl; 
    cout << "The address of i (ip) is " << ip << endl;
    cout << "The address of i (&i) is " << &i << endl;

    *ip = 0;

    cout << "The value of i is " << i<< endl;
    return 0;

}
