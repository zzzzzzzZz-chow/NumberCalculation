#include <chrono>
#include <iostream>
#include <rational.h>

Rational pow(const Rational & r, int n) {
    Rational result = r;
    for(int i = 0; i < n; ++i)
        result = result * r;
    return result;
}

int main() {

    std::cout  << "Ehlo, word!" << std::endl;
    Rational r1("1.1");
    Rational r2 = r1 - Rational{"1"};
    Rational r3 = r2 / Rational{"1"} - pow(r2, 2) / Rational{"2"} + pow(r2, 3) / Rational{"6"} - pow(r2, 4) / Rational{"24"} + pow(r2, 5) / Rational{"120"}
         - pow(r2, 6) / Rational{"720"} + pow(r2, 7) / Rational{"5040"} - pow(r2, 8) / Rational{"40320"} +  pow(r2, 9) / Rational{"362880"};
    std::cout << r3.to_ratio_string() << std::endl;
    return 0;
}
