#include <iostream>
#include <string>

int main() {
    std::string a, b, result;
    long long pos = -1, i = 0;
    std::cin >> a >> b;
    while (i < b.size()) {
        if (b[i] != '<') {
            result.insert(pos + 1, b, i, 1);
            ++pos;
            ++i;
        } else {
            if (b[i + 1] == 'l') {
                if (pos > -1)
                    --pos;
                i += 6;
            } else if (b[i + 1] == 'r') {
                if (pos < (int) result.size() - 1)
                    ++pos;
                i += 7;
            } else if (b[i + 1] == 'd') {
                if (pos < (int) result.size() - 1) {
                    result.erase(pos + 1, 1);
                }
                i += 8;
            } else if (b[i + 1] == 'b') {
                if (pos > -1) {
                    result.erase(pos, 1);
                    --pos;
                }
                i += 8;
            }
        }
    }
    if (result == a) {
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }
    return 0;
}
