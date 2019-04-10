#include "Handle.h"
#include <iostream>

int main()
{
    Handle h;
    h.someOperationOnBody();
    std::cout << h.getDataFromBody() << std::endl;

    return 0;
}


