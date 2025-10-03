#include <iostream>
#include <vector>
#include <numeric>

void solve() {
    long long n;
    int m;
    std::cin >> n >> m;
    std::vector<long long> a(m);
    for (int i = 0; i < m; ++i) {
        std::cin >> a[i];
    }

    long long ans = 0;

    bool is_consecutive = true;
    if (m > 1) {
        for (int i = 1; i < m; ++i) {
            if (a[i] != a[i - 1] + 1) {
                is_consecutive = false;
                break;
            }
        }
    }
    
    if (is_consecutive) {
        long long max_val_in_a = a[m - 1];
        if (max_val_in_a <= n) {
            ans += (n - max_val_in_a + 1);
        }
    }
    for (int p = 1; p < m; ++p) {
        if (a[p] != 1) {
            continue;
        }

        bool prefix_consecutive = true;
        if (p > 1) {
            for (int i = 1; i < p; ++i) {
                if (a[i] != a[i - 1] + 1) {
                    prefix_consecutive = false;
                    break;
                }
            }
        }
        
        if (!prefix_consecutive) {
            continue;
        }

        long long k = a[p - 1];

        if (k >= n) {
            continue;
        }

        bool suffix_match = true;
        int a_idx = p;
        long long current_segment = k + 1;
        long long current_val = 1;

        while (a_idx < m) {
            if (a[a_idx] != current_val) {
                suffix_match = false;
                break;
            }
            
            a_idx++;
            current_val++;
            
            if (current_val > current_segment) {
                if (current_segment >= n) {
                    if (a_idx < m) {
                       suffix_match = false;
                    }
                    break; 
                }
                current_segment++;
                current_val = 1;
            }
        }

        if (suffix_match) {
            ans++;
        }
    }

    std::cout << ans << std::endl;
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