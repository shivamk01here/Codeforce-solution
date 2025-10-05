#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end());

    int max_diff = 0;
    for (int i = 0; i < n; i += 2) {
        int current_diff = a[i + 1] - a[i];
        if (current_diff > max_diff) {
            max_diff = current_diff;
        }
    }

    std::cout << max_diff << std::endl;
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