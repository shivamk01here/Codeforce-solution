#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void solve() {
    int n;
    long long m;
    cin >> n >> m;

    vector<pair<long long, int>> requirements;
    requirements.push_back({0, 0});

    for (int i = 0; i < n; ++i) {
        long long a;
        int b;
        cin >> a >> b;
        requirements.push_back({a, b});
    }

    long long max_points = 0;
    for (int i = 0; i < n; ++i) {
        long long t_i = requirements[i].first;
        int s_i = requirements[i].second;
        long long t_i_plus_1 = requirements[i+1].first;
        int s_i_plus_1 = requirements[i+1].second;

        long long duration = t_i_plus_1 - t_i;

        long long parity_match_check = (duration + s_i + s_i_plus_1) % 2;
        
        long long max_runs_in_segment = duration - parity_match_check;

        max_points += max_runs_in_segment;
    }

    long long t_n = requirements[n].first;
    long long duration_last = m - t_n;

    max_points += duration_last;

    cout << max_points << endl;
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