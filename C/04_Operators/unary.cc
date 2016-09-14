#include <iostream>
using namespace std;


int main() {
    int i = 0, j;
    j = i++;
    cout << i << " " << j << endl;
    j = ++i;
    cout << i << " " << j << endl;
    return 0;
}
