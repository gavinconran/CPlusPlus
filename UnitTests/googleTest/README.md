# GoogleTest (gTest)
This repository contains code examples from [**Getting started with Google Test (GTest) on Ubuntu**](https://www.eriksmistad.no/getting-started-with-google-test-on-ubuntu/).

### Step 1: install gtest development package
```
$ sudo apt-get install libgtest-dev
```

### Step 2: Compile Library
```
$ sudo apt-get install cmake # install cmake
$ cd /usr/src/gtest
$ sudo cmake CMakeLists.txt
$ sudo make
 
#### copy or symlink libgtest.a and libgtest_main.a to your /usr/lib folder
$ sudo cp *.a /usr/lib
```
### Step 3: Create a function to test
```C++
// whattotest.cpp
#include <math.h>
 
double squareRoot(const double a) {
    double b = sqrt(a);
    if(b != b) { // nan check
        return -1.0;
    }else{
        return sqrt(a);
    }
}
```

### Step 4: Create Unit Tests
```C++
// tests.cpp
#include "whattotest.cpp"
#include <gtest/gtest.h>
 
TEST(SquareRootTest, PositiveNos) { 
    ASSERT_EQ(6, squareRoot(36.0));
    ASSERT_EQ(18.0, squareRoot(324.0));
    ASSERT_EQ(25.4, squareRoot(645.16));
    ASSERT_EQ(0, squareRoot(0.0));
}
 
TEST(SquareRootTest, NegativeNos) {
    ASSERT_EQ(-1.0, squareRoot(-15.0));
    ASSERT_EQ(-1.0, squareRoot(-0.2));
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
```

### Step 5: Compile Code
#### 5a: Create CMakeLists.txt
```
cmake_minimum_required(VERSION 2.6)
 
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests tests.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
```
#### 5b: Compile and run the tests
```
$ cmake CMakeLists.txt
S make
$ ./runTests
```



