#include <iostream>
#include <vector>
#include <string>

void solve() {
    int n, m;
    if (!(std::cin >> n >> m)) return;

    for (int r = 1; r <= n; ++r) {
        if (r % 2 != 0) {
            for (int c = 0; c < m; ++c) {
                std::cout << '#';
            }
        }
        else {
            if ((r / 2) % 2 != 0) {
                for (int c = 0; c < m - 1; ++c) {
                    std::cout << '.';
                }
                std::cout << '#';
            }
            else {
                std::cout << '#';
                for (int c = 0; c < m - 1; ++c) {
                    std::cout << '.';
                }
            }
        }
        
        std::cout << "\n";
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();

    return 0;
}