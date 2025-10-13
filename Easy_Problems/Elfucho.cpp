#include <iostream>

void solve() {
    int n;
    std::cin >> n;
    
    int total_matches = 2 * n - 2;
    
    std::cout << total_matches << std::endl;
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