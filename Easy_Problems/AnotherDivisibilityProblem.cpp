#include <iostream>

void solve() {
    int x;
    std::cin >> x;
    long long y = 2LL * x;
    std::cout << y << '\n';
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