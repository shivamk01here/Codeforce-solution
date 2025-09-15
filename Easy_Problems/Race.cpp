#include <iostream>
#include <cmath>
#include <algorithm>

void solve() {
    int a, x, y;
    std::cin >> a >> x >> y;

    if ((a > std::min(x, y) && a < std::max(x, y))) {
        std::cout << "NO\n";
    } else {
        std::cout << "YES\n";
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