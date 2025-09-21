#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<long long> g(n);
        for (int i = 0; i < n; i++) {
            cin >> g[i];
        }
        
        // Sort grumpiness values in descending order
        sort(g.begin(), g.end(), greater<long long>());
        
        long long total_emeralds = 0;
        
        // Pair villagers consecutively from highest to lowest grumpiness
        for (int i = 0; i < n - 1; i += 2) {
            // Cost of pairing villagers i and i+1 is max(g[i], g[i+1])
            // Since array is sorted in descending order, max is always g[i]
            total_emeralds += g[i];
        }
        
        // If odd number of villagers, the last one (minimum grumpiness) 
        // needs to be paired with a 0-grumpiness villager
        if (n % 2 == 1) {
            total_emeralds += g[n - 1];
        }
        
        cout << total_emeralds << endl;
    }
    
    return 0;
}
