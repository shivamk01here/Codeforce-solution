#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <utility>

using namespace std;

typedef long long ll;

ll get_fx(ll x) {
    ll root = static_cast<ll>(floor(sqrt(static_cast<double>(x))));
    return root;
}

ll get_fy(ll y) {
    ll root = static_static_cast<ll>(floor(sqrt(static_cast<double>(y))));
    if (root * (root + 1) > y) {
        return root - 1;
    }
    return root;
}

void solve() {
    ll x, y;
    cin >> x >> y;

    ll fx = get_fx(x);
    ll fy = get_fy(y);

    ll low = 1, high = 100000;
    ll ans_f = -1;

    while (low <= high) {
        ll f = low + (high - low) / 2;
        bool even_ok = (f <= fx && f <= fy && x - y <= -f);
        bool odd_ok = (f + 1 <= fx && f <= fy && x - y >= f + 1);

        if (even_ok || odd_ok) {
            ans_f = f;
            high = f - 1;
        } else {
            low = f + 1;
        }
    }

    if (ans_f == -1) {
        cout << -1 << "\n";
        return;
    }

    ll f = ans_f;
    bool even_ok = (f <= fx && f <= fy && x - y <= -f);
    bool odd_ok = (f + 1 <= fx && f <= fy && x - y >= f + 1);

    if (even_ok) {
        cout << 2 * f << "\n";
    } else {
        cout << 2 * f + 1 << "\n";
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