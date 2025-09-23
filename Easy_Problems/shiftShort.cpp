#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;
        int zeros_count = 0;
        for (char c : s) {
            if (c == '0') {
                zeros_count++;
            }
        }
        int misplaced_ones = 0;
        for (int i = 0; i < zeros_count; ++i) {
            if (s[i] == '1') {
                misplaced_ones++;
            }
        }
        std::cout << misplaced_ones << std::endl;
    }
    return 0;
}