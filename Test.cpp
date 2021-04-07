#include "doctest.h"
#include "Board.hpp"
#include <string>
#include <algorithm>

using namespace ariel;
using namespace std;

TEST_CASE("check post & read (valid input)"){   
    Board b;
    b.post(10,10, Direction::Horizontal, "post");
    CHECK(b.read(10, 10, Direction::Horizontal,1) == (string)("p"));
}   