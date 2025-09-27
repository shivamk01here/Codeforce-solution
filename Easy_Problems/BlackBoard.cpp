#include <iostream>
#include <string>
std::string solve() {
    int n;
    if (!(std::cin >> n)) return "";
    if (n % 4 == 0) {
        return "Bob";
    } else {
        return "Alice";
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    if (!(std::cin >> t)) return 0;
    while (t--) {
        std::cout << solve() << "\n";
    }
    return 0;
}