#include <iostream>
using namespace std;

int main() {
    char *name = "John";    // pointer to char
    char *surname = "Smith";

    cout << &name << endl;
    cout << *name << endl;
    cout << name << endl;

    char *list[2];          // array of pointers to char
    list[0] = name;
    list[1] = surname;
    cout << &list << endl;
    cout << *(list+1) << endl;
    cout << list << endl;

    char **l = list;    // pointer to pointer to char
    cout << &l << endl;
    cout << *(l) << endl;
    cout << *(l+1) << endl;
    cout << l << endl;

    for (int i = 0; i < 2; i++)
        cout << l[i] << " ";

    
    return 0;

}
