// C++ string class
// safer way to use strings

#include <iostream>
#include <string>     // include string.h for C strings
#include <cstdio>      // include stdio.h for printf
using namespace std;

int main() {
    // string type rather than char
    string s = "Hi there.", r, t;   // C strings

    cout << "Second character of s is '"   // [] works as for other arrays
         << s[1] << "'." << endl;
    r = s;
    cout << "r = " << r << endl;
    r = r + s;
    cout << "r = " << r << endl;
    t = r.substr(r.find("re."), r.length());
    cout << "t = " << t << endl;

    printf("Value of string s = '%s'\n",s.c_str());

    s = r;
    return 0;
}


      

    


