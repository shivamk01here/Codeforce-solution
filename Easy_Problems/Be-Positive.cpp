#include <iostream>
#include <vector>
#include <numeric>

void solve() {
    int n;
    std::cin >> n;

    int num_zeros = 0;
    int num_negatives = 0;

    for (int i = 0; i < n; ++i) {
        int a;
        std::cin >> a;
        if (a == 0) {
            num_zeros++;
        } else if (a == -1) {
            num_negatives++;
        }
    }

    int operations = num_zeros;

    if (num_negatives % 2 != 0) {
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