#include "Handle.h"
#include <iostream>

Handle::Handle()
{
    body = new Body;
}
Handle::~Handle()
{
    delete body;
}

void Handle::someOperationOnBody()
{
    body->someData = 42;    
}

int Handle::getDataFromBody()
{
    return body->someData;
}

