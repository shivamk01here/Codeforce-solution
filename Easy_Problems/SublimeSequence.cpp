#include <iostream>

void solve() {
    int x, n;
    std::cin >> x >> n;

    if (n % 2 == 0) {
        std::cout << 0 << std::endl;
    } else {
        std::cout << x << std::endl;
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