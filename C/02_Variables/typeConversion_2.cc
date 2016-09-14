#include <iostream>
using namespace std;

int main() {
    double x = 1.999;
    int i = (int) x;         // cast from double to int
    char c = 'a';
    

    cout << i                // '1'
         << " " << x         // '1.999'
         << endl;
    cout << c                // 'a'
         << " " << (int) c   // '97'
         << endl;
    
    return 0;
}


