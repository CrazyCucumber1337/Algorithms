#include <iostream>

int main() {
    long long n, k, d;
    std::cin >> n >> k >> d;
    for (int i = 0; i <= 10; ++i) {
        if (i == 10) {
            std::cout << -1;
        } else {
            if ((n * 10 + i) % k == 0) {
                std::cout << n << i;
                for (long long j = 0; j < d - 1; ++j) {
                    std::cout << 0;
                }
                break;
            }
        }
    }
    return 0;
}
