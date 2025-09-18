#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

const int MAXN = 31; 
vector<int> adj[MAXN];
int match[MAXN];
bool visited[MAXN];

bool dfs(int u) {
    for (int v : adj[u]) {
        if (!visited[v]) {
            visited[v] = true;
            if (match[v] == -1 || dfs(match[v])) {
                match[v] = u;
                return true;
            }
        }
    }
    return false;
}

int max_bipartite_matching(int n) {
    int result = 0;
    for (int i = 0; i < n; ++i) {
        match[i] = -1;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            visited[j] = false;
        }
        if (dfs(i)) {
            result++;
        }
    }
    return result;
}

void solve() {
    int n;
    long long c;
    cin >> n >> c;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i) {
        adj[i].clear();
        for (int j = 0; j < n; ++j) {
            bool can_destroy_for_free = true;
            long long current_weight = a[i];
            
            // This is the weight after j doublings
            // The cost is 0 if a[i] * 2^j <= c
            
            // Check for overflow before multiplication
            if (j >= 63) { // 2^63 overflows long long
                can_destroy_for_free = false;
            } else {
                long long power_of_2 = 1LL << j;
                // Use division to prevent overflow
                if (power_of_2 > c / a[i] && a[i] != 0) { // a[i] >= 1 so safe
                    can_destroy_for_free = false;
                }
            }

            if (can_destroy_for_free) {
                adj[i].push_back(j);
            }
        }
    }

    int matching_size = max_bipartite_matching(n);
    cout << n - matching_size << endl;
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