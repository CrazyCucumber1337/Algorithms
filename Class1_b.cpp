#include <iostream>

int main() {
    long long g1, g2, c1, c2, home;
    char skip;
    std::cin >> g1 >> skip >> g2;
    std::cin >> c1 >> skip >> c2 >> home;
    long long dif = g2 + c2 - g1 - c1;
    if (dif < 0) {
        std::cout << 0;
    } else if (home == 1) {
        if (c1 + dif > g2) {
            std::cout << dif;
        } else {
            std::cout << dif + 1;
        }
    } else {
        if (g1 > c2) {
            std::cout << dif;
        } else {
            std::cout << dif + 1;
        }
    }
    return 0;
}
