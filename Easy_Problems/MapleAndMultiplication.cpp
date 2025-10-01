#include <iostream>
#include <algorithm>

void solve() {
    long long a, b;
    if (!(std::cin >> a >> b)) return;

    if (a == b) {
        std::cout << 0 << "\n";
        return;
    }
    if (a > b) {
        if (a % b == 0) {
            std::cout << 1 << "\n";
            return;
        }
    } else { 
        if (b % a == 0) {
            std::cout << 1 << "\n";
            return;
        }
    }

    std::cout << 2 << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    if (!(std::cin >> t)) return 0;

    while (t--) {
        solve();
    }

    return 0;
}