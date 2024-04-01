#include <iostream>
#include <vector>
#include <iomanip>

void R(int i0, int j0, std::vector<std::vector<int>> &a) {
    for (int i = i0 - 1; i >= 0 && a[i][j0] != 1 && a[i][j0] != 2; --i) {
        a[i][j0] = -1;
    }
    for (int i = i0 + 1; i < 8 && a[i][j0] != 1 && a[i][j0] != 2; ++i) {
        a[i][j0] = -1;
    }
    for (int j = j0 - 1; j >= 0 && a[i0][j] != 1 && a[i0][j] != 2; --j) {
        a[i0][j] = -1;
    }
    for (int j = j0 + 1; j < 8 && a[i0][j] != 1 && a[i0][j] != 2; ++j) {
        a[i0][j] = -1;
    }
}

void B(int i0, int j0, std::vector<std::vector<int>> &a) {
    for (int i = i0 - 1, j = j0 + 1; i >= 0 && j < 8 && a[i][j] != 1 && a[i][j] != 2; --i, ++j) {
        a[i][j] = -1;
    }
    for (int i = i0 - 1, j = j0 - 1; i >= 0 && j >= 0 && a[i][j] != 1 && a[i][j] != 2; --i, --j) {
        a[i][j] = -1;
    }
    for (int i = i0 + 1, j = j0 - 1; i < 8 && j >= 0 && a[i][j] != 1 && a[i][j] != 2; ++i, --j) {
        a[i][j] = -1;
    }
    for (int i = i0 + 1, j = j0 + 1; i < 8 && j < 8 && a[i][j] != 1 && a[i][j] != 2; ++i, ++j) {
        a[i][j] = -1;
    }
}

int main() {
    std::vector<std::vector<int>> a(8, std::vector<int> (8, 0));
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            char x;
            std::cin >> x;
            if (x == 'R') {
                a[i][j] = 1;
            } else if (x == 'B') {
                a[i][j] = 2;
            }
        }
    }
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (a[i][j] == 1) {
                R(i, j, a);
            } else if (a[i][j] == 2) {
                B(i, j, a);
            }
        }
    }
    int s = 0;
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (a[i][j] == 0)
                ++s;
        }
    }
    
    
    // for (int i = 0; i < 8; ++i) {
    //     for (int j = 0; j < 8; ++j) {
    //         std::cout << std::setw(2) << a[i][j] << ' ';
    //     }
    //     std::cout << std::endl;
    // }
    std::cout << s;
    return 0;
}
