#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "dynamic_array.h"

TEST_CASE("Testing dynamic array's")
{
    dynamic_array a;
    CHECK(a.Size() == 0);
    CHECK(a.begin() == a.end());
    CHECK(a.Capacity() == 0);
}