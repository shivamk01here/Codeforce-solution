#include <iostream>

void solve() {
    int n;
    std::cin >> n;

    int operations = 0;
    int neg_count = 0;

    for (int i = 0; i < n; ++i) {
        int val;
        std::cin >> val;
        if (val == 0) {
            operations++;
        } else if (val == -1) {
            neg_count++;
        }
    }
    if (neg_count % 2 == 1) {
        operations += 2;
    }

    std::cout << operations << std::endl;
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