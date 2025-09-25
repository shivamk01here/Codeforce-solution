#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

void solve() {
    long long n, k, p;
    if (!(cin >> n >> k >> p)) return;
    if (k == 0) {
        cout << 0 << endl;
        return;
    }
    long long abs_k = abs(k);
    long long m_min = (abs_k + p - 1) / p;
    if (m_min > n) {
        cout << -1 << endl;
    } else {
        cout << m_min << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0; 
    while (t--) {
        solve();
    }

    return 0;
}