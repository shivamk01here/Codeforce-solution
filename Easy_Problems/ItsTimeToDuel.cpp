#include <iostream>
#include <vector>
#include <string>

// Function to solve a single test case
void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    // Check for the n=2, (1, 1) case
    // This is a contradiction because in one duel, both can't win.
    if (n == 2 && a[0] == 1 && a[1] == 1) {
        std::cout << "YES\n";
        return;
    }

    // Check for any adjacent (0, 0) pair
    bool foundContradiction = false;
    for (int i = 0; i < n - 1; ++i) {
        // If player i and player i+1 both report 0 wins:
        // a[i] = 0 implies player i must lose all duels, including to i+1.
        // a[i+1] = 0 implies player i+1 must lose all duels, including to i.
        // This is a direct contradiction.
        if (a[i] == 0 && a[i + 1] == 0) {
            foundContradiction = true;
            break;
        }
    }

    if (foundContradiction) {
        std::cout << "YES\n";
    } else {
        // If neither contradiction is found, a valid scenario is possible.
        std::cout << "NO\n";
    }
}

int main() {
    // Optimize C++ standard streams for faster I/O
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}