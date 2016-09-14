#include <iostream>
using namespace std;

int main() {
    bool small;
    double x = 1.2, y = 1.1;
    small = 2 < 3;

    if (small && x > y) {
        if (y > 0.5 || x < -3) 
            cout << "Then." << endl;
    }
    if (!small) cout << "Not." << endl;
    cout << small << endl;
    return 0;
}
            
