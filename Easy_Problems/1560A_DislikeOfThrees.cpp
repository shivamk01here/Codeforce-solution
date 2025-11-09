#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::vector<int> liked_numbers;
    int num = 1;
    while (liked_numbers.size() < 1000) {
        if (num % 3 != 0 && num % 10 != 3) {
            liked_numbers.push_back(num);
        }
        num++;
    }

    int t;
    std::cin >> t;
    while (t--) {
        int k;
        std::cin >> k;
        std::cout << liked_numbers[k - 1] << "\n";
    }

    return 0;
}