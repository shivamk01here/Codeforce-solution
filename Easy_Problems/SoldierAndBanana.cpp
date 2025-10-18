#include <iostream>
#include <algorithm> 

int main() {
    long long k, n, w;
    std::cin >> k >> n >> w;
    long long totalCost = k * w * (w + 1) / 2;
    long long borrowAmount = totalCost - n;
    std::cout << std::max(0LL, borrowAmount) << std::endl;
    return 0;
}