# include <iostream>
using namespace std;

int main() {
    double rate, pounds, euro, sum;
    int i;

    cout << "Please enter current exchange rate for GBP to EURO: ";
    cin >> rate;

    pounds = 1.0;
    while (pounds > 0.0) {

        cout << "Enter amount in pounds to convert (0 to quit) : ";
        cin >> pounds;
        if (pounds > 0.0) {
            euro = pounds * rate;
            cout << pounds << " GDP are " << euro << " in EURO." << endl;
        }
        else {
            cout << "Now quitting this part."      << endl;
        }
    }

    sum = 0.0;
    for (i = 0; i < 1000; i++){
        sum += 1.0 / (i + 1.0);
    }

    cout << "The sum 1 + 1/2 + 1/3 + ... + 1/1000 is " << sum << endl;
    return 0;
}



