#include <algorithm>
#include <cmath>
#include <cstdint>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <tuple>
#include <vector>
using namespace std;
#define int long long

#define N 500005
void solve() {
    int x, y, z;
    cin >> x >> y >> z;

    int a = x | z;
    int b = x | y;
    int c = y | z;
    if ((a & b) == x && (b & c) == y && (c & a) == z){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
#ifdef DEBUG
    freopen("./input.txt", "r", stdin);
#endif
    int t;
    cin >> t;
    while (t--) {
#ifdef DEBUG
        static int test_num = 1;
        cout << "test case: " << test_num++ << endl;
#endif
        solve();
    }
}