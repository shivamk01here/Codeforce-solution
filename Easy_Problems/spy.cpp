#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int spyValue;
        if (a[0] == a[1] || a[0] == a[2]) {
            spyValue = a[0]; 
        } else {
            cout << 1 << "\n"; 
            continue;
        }

        for (int i = 0; i < n; i++) {
            if (a[i] != spyValue) {
                cout << i + 1 << "\n"; 
                break;
            }
        }
    }
    return 0;
}
