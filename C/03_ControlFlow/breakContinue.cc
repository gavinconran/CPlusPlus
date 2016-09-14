#include <iostream>
using namespace std;

int main() {
    double temp = 0.0;
    char answer;
    while (temp < 37.0) {
        cout << "Do you want to continue? (y/n) : ";
        cin >> answer;
        if (answer == 'n' || answer == 'N')
            break;
        cout << "Give me your temperature : ";
        cin >> temp;
        if (temp >= 37.0)
            cout << "You have temperature and should see a doctor." << endl;
    }

    cout << "Which number is missing here ... ?" << endl;
    for (int i = 0; i < 10; i++) {
        if (i == 5) continue;
        cout << i << "   ";
    }
    cout << endl;
    return 0;
}
