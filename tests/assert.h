#pragma once

#include <iostream>
#define ASSERT(expression, result) if ((expression) != (result)) { std::cout << expression << " != " << var << "\n"; return -1; }