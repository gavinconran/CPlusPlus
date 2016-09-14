#include <iostream>
using namespace std;

void important_stuff() {
    // some important code
}

int main() {
    char answer;
    cout << "Do you want to start the program? (y/n) : ";
    cin >> answer;

    while (answer == 'Y' || answer == 'y') {
        important_stuff();
        cout << "Do you want to continue? (y/n) : ";
        cin >> answer;
    }
    cout << "Your answer : " << answer << endl;
    return 0;
}


