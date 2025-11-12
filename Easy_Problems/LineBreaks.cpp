#include <iostream>
#include <string>
#include <vector>
#include <ios>

using namespace std;

void solve() {
    int n;
    int m;
    cin >> n >> m;
    
    int current_length = 0;
    int word_count = 0;
    bool can_add = true;
    
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        
        if (can_add) {
            int len = s.length();
            if (current_length + len <= m) {
                current_length += len;
                word_count++;
            } else {
                can_add = false;
            }
        }
    }
    
    cout << word_count << endl;
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