#include <iostream>
#include <vector>
#include <algorithm>

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    if (n <= 1) {
        std::cout << 0 << std::endl;
        std::cout << std::endl;
        return;
    }

    std::vector<int> unorderable_indices;
    int min_price_so_far = a[0];

    for (int i = 1; i < n; ++i) {
        if (a[i] > min_price_so_far) {
            unorderable_indices.push_back(i + 1);
        } else {
            min_price_so_far = a[i];
        }
    }

    std::cout << unorderable_indices.size() << std::endl;
    for (size_t i = 0; i < unorderable_indices.size(); ++i) {
        std::cout << unorderable_indices[i] << (i == unorderable_indices.size() - 1 ? "" : " ");
    }
    std::cout << std::endl;
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