#include <iostream>

int main() {
    long long n, s = 0;
    std::cin >> n;
    for (long long i = 0; i < n; ++i) {
        long long x;
        std::cin >> x;
        s += x / 4 + std::min((long long)2, x % 4);
    }
    std::cout << s;
    return 0;
}
