#include <iostream>
#include "MyClass.h"

using namespace std;

MyClass::MyClass()
{
    cout << "Hello from constructor" << endl;
}

MyClass::~MyClass()
{
    cout << "Hello from destructor" << endl;
}

