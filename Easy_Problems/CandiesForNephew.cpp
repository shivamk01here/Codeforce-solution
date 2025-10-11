#include <iostream>
void solve() {
    int n;
    std::cin >> n; 
    int remainder = n % 3;

    if (remainder == 0) {
        std::cout << 0 << std::endl;
    } else {
        std::cout << 3 - remainder << std::endl;
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