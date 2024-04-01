#include <iostream>

int main() {
    long long p, v, q, m, s;
    std::cin >> p >> v >> q >> m;
    if (std::abs(q - p) > m + v) {
        s = 2 + 2 * v + 2 * m;
    } else {
        s = std::max(p + v, q + m) - std::min(p - v, q - m) + 1;
    }
    std::cout << s;
    return 0;
}
