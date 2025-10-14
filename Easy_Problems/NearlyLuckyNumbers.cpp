#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string n;
    std::cin >> n;

    int lucky_digit_count = 0;

    for (char digit : n) {
        if (digit == '4' || digit == '7') {
            lucky_digit_count++;
        }
    }
    if (lucky_digit_count == 4 || lucky_digit_count == 7) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}