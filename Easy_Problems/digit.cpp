#include <bits/stdc++.h>
using namespace std;
using int64 = long long;
using i128 = __int128_t;

// Function to compute digit sum from 1 to n
long long sumDigits(long long n) {
    if (n < 10) return n * (n + 1) / 2;
    string s = to_string(n);
    int len = s.size();
    long long p = 1;
    for (int i = 1; i < len; i++) p *= 10;
    int first = s[0] - '0';
    long long rest = n - first * p;
    long long res = first * (first - 1) / 2 * p;
    res += first * sumDigits(p - 1);
    res += first * (rest + 1);
    res += sumDigits(rest);
    return res;
}

// Returns sum of first k digits in the infinite sequence
long long solveOne(long long k) {
    long long digits = 1;
    long long count = 9;
    long long start = 1;
    
    while (k > digits * count) {
        k -= digits * count;
        digits++;
        count *= 10;
        start *= 10;
    }
    
    long long numbers = (k + digits - 1) / digits;
    long long upto = start + numbers - 1;
    
    long long ans = sumDigits(upto - 1);
    int extra = k % digits;
    if (extra == 0) {
        ans += sumDigits(upto) - sumDigits(upto - 1);
    } else {
        ans += sumDigits(upto - 1);
        string s = to_string(upto);
        for (int i = 0; i < extra; i++) ans += s[i] - '0';
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long k;
        cin >> k;
        cout << solveOne(k) << "\n";
    }
    return 0;
}
