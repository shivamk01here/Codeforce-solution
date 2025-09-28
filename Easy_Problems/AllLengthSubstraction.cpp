#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    int match_count = 0;
    for (int i = 0; i < n; ++i) {
        if ((p[i] % 2) == ((i + 1) % 2)) {
            match_count++;
        }
    }

    int mismatch_count = n - match_count;
    if (match_count == n || mismatch_count == n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}