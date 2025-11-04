#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    std::string s;
    std::cin >> s;
    
    std::string numbers;
    for (char c : s) {
        if (c != '+') {
            numbers.push_back(c);
        }
    }
    
    std::sort(numbers.begin(), numbers.end());
    
    if (!numbers.empty()) {
        std::cout << numbers[0];
        for (size_t i = 1; i < numbers.length(); ++i) {
            std::cout << "+" << numbers[i];
        }
    }
    
    std::cout << "\n";
    
    return 0;
}