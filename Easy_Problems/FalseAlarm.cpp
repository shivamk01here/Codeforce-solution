#include <iostream>
#include <vector>
#include <algorithm>

void solve() {
    int n, x;
    std::cin >> n >> x;
    std::vector<int> doors(n);
    int first_closed = -1;
    int last_closed = -1;

    for (int i = 0; i < n; ++i) {
        std::cin >> doors[i];
        if (doors[i] == 1) {
            if (first_closed == -1) {
                first_closed = i + 1; // 1-based index
            }
            last_closed = i + 1; // 1-based index
        }
    }

    if (first_closed == -1) {
        // No closed doors, he can pass without the button
        // Problem statement guarantees at least one closed door
        std::cout << "YES\n";
    } else {
        int range_of_closed_doors = last_closed - first_closed + 1;
        if (x >= range_of_closed_doors) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}