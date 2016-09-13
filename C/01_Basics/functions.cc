# include <iostream>
using namespace std;

void welcome() {
    cout << "Hi there." << endl;
}

int input() {
    int in;
    cout << "Enter a number: ";
    cin >> in;
    return in;
}

void goodbye(int number) {
    cout << "You typed in: " << number << "." << endl;
    cout << "Thanks and goodbye!" << endl;
}


int main() {
    int i;

    welcome();
    i = input();
    goodbye(i);
    return 0;
}



