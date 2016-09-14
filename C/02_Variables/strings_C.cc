#include <iostream>
#include <cstring>     // include string.h for C strings
#include <cstdio>      // include stdio.h for printf
using namespace std;

int main() {
    char s[10] = "Hi there.", r[20];   // C strings
    char *t;                           // pointer to char

    cout << "Second character of s is '"   // [] works as for other arrays
         << s[1] << "'." << endl;
    strcpy(r, s);
    cout << "r = " << r << endl;
    strcat(r, s);
    cout << "r = " << r << endl;
    t = strstr(r, "re.");
    cout << "t = " << t << endl;

    printf("Value of string s = '%s'\n",s);

    strcpy(s, r);
    return 0;
}


      

    


