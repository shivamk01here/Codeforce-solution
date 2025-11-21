#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    string num;
    cin >> t;

    while (t--) {
        cin >> n;
        cin >> num;
        
        int is1 = 0;
        string num1;
        num1.push_back(num[0]);

        for (int i = 1; i < n; i += 2) {
            if (i + 1 < n) {
                char ap = ((num[i] - 48) && (num[i+1] - 48)) + 48;
                num1.push_back(ap);
            }
        }

        for (auto i:num1) {
            if (i == '1') {
                is1 = 1;
                break;
            }
        }

        if (is1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}