#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
    if (argc != 2)
        cout << "Usage: " << argv[0] << " <filename>" << endl;
    else {
        ifstream f(argv[1]);
        if (!f.is_open())
            cout << "Could not open file " << argv[1] << endl;
        else {
            char x;
            while (f.get(x)) cout << x;
        }
        f.close();
    }
    return 0;
}

    

