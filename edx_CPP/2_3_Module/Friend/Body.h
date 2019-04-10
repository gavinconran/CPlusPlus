#pragma once

class Handle; // Forward reference of the "other" class, so the compiler knows about it.

class Body
{
    friend class Handle;

private:
    int someData;
};


