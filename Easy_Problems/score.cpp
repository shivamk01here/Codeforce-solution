#include <iostream>

void solve() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    // Check first half validity
    bool first_half_valid = (a <= 2 * (b + 1)) && (b <= 2 * (a + 1));

    // Calculate goals in the second half
    int second_half_rioi = c - a;
    int second_half_kdoi = d - b;

    // Check second half validity
    bool second_half_valid = (second_half_rioi <= 2 * (second_half_kdoi + 1)) && (second_half_kdoi <= 2 * (second_half_rioi + 1));

    if (first_half_valid && second_half_valid) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
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