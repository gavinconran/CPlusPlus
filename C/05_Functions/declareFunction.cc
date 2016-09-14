#include <iostream>
using namespace std;

// declare functions
void welcome();
int input();
void goodbye(int );  // no variable name needs to be given

int main() {
    int i;
    // functions are called as usual
    welcome();
    i = input();
    goodbye(i);

    return 0;
}


/************************************/
/* Implementaion of the functions   */
/* could be in a separe header file */
/************************************/

void welcome() {
    cout << "Hi there." << endl;
}

int input() {
    int in;
    cout << "Please enter a number: ";
    cin >> in;
    return in;
}

void goodbye(int number) {
    cout << "You typed in: " << number << "." << endl;
    cout<< "Thanks and goodbye!" << endl;
}                
