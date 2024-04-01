#include <iostream>

int main() {
    long long ans, n;
    std::cin >> n;
    std::cin >> ans;
    for (long long i = 1; i < n; ++i) {
        long long x;
        std::cin >> x;
        if ((ans * x) % 2 != 0) {
            std::cout << 'x';
            ans *= x;
        } else {
            std::cout << '+';
            ans += x;
        }
    }
    return 0;
}
