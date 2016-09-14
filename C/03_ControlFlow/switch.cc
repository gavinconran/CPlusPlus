#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "Enter a number < 10 : "; std::cin >> i;
    if (i > 0 && i < 10)
        switch (i) {
            case 2 :
            case 3 :
            case 5 :
            case 7 : std::cout << "You have entered a prime number." << std::endl;
                    break;
            default: std::cout << "The number you entered is not prime." << std::endl;
        }
    else
        std::cout << "your numer was out of range." << std::endl;

    return 0;
}


