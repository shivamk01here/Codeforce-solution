#include <iostream>
#include <vector>
#include <set>

void solve() {
    int n;
    std::cin >> n;
    
    std::set<int> distinct_elements;
    for (int i = 0; i < n; ++i) {
        int val;
        std::cin >> val;
        distinct_elements.insert(val);
    }
    
    int m = distinct_elements.size();
    
    if (m > 0) {
        std::cout << (2 * m - 1) << std::endl;
    } else {
        std::cout << 0 << std::endl;
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