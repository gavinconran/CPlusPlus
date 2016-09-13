#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("output.txt");
    if (! fout.is_open()) {
        cout << "Error opening output file." << endl;
        return -1;
    }
    fout << "Hello Wrld" << endl;
    fout.close();

    ifstream fin("input.txt");
    if (! fin.is_open()) {
        cout << "Error opening input file." << endl;
        return -1;
    }

    int number;
    fin >> number;
    fin.close();
    cout << "Read the number: " << number << endl;
    return 0;
}

