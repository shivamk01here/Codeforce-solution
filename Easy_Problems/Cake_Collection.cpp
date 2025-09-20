#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

void solve() {
    int n;
    long long m;
    std::cin >> n >> m;
    std::vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    std::sort(a.rbegin(), a.rend());

    long long total_cakes = 0;

    // The maximum number of distinct ovens we can collect from is n.
    // However, we only have m collections in total.
    // So, we can't collect from more than m distinct ovens.
    long long ovens_to_consider = std::min((long long)n, m);

    // To maximize the total cakes, we must assign the latest available
    // collection times to the ovens with the highest production rates.
    // The available collection times are 1, 2, ..., m.
    // The latest are m, m-1, m-2, ...
    // The highest rates are a[0], a[1], a[2], ... after sorting.
    // We pair the top `ovens_to_consider` rates with the top `ovens_to_consider` times.
    for (int i = 0; i < ovens_to_consider; ++i) {
        total_cakes += a[i] * (m - i);
    }

    std::cout << total_cakes << std::endl;
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