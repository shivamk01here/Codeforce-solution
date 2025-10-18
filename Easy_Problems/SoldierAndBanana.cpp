#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long k, n, w;
    cin >> k >> n >> w;
    long long totalCost = k * w * (w + 1) / 2;
    long long borrowAmount = totalCost - n;
    cout << max(0LL, borrowAmount) << endl;
    return 0;
}
