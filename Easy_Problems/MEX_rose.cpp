#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

void solve() {
    int n;
    int k;
    std::cin >> n >> k;

    std::vector<bool> present(k, false);
    int count_k = 0;

    for (int i = 0; i < n; ++i) {
        int val;
        std::cin >> val;
        if (val < k) {
            present[val] = true;
        } else if (val == k) {
            count_k++;
        }
    }

    int needed_prefix = 0;
    for (int i = 0; i < k; ++i) {
        if (!present[i]) {
            needed_prefix++;
        }
    }
    std::cout << std::max(needed_prefix, count_k) << std::endl;
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