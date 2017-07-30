#include <gtest/gtest.h>


#include "MyClass.h"


TEST(MyClass, constructor)
{
    EXPECT_NO_THROW(MyClass obj1;);
}

