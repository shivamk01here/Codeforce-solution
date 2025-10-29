#include <iostream>
#include <vector>
#include <cstring> 

/**
 * @brief Checks if a given year has only distinct digits.
 * @param year The year number to check.
 * @return true if all digits are distinct, false otherwise.
 */
bool hasDistinctDigits(int year) {
    bool seen[10] = {false};
    
    int temp = year;
    
    while (temp > 0) {
        int digit = temp % 10;
        
        if (seen[digit]) {
            return false; 
        }
        seen[digit] = true;
        temp /= 10;
    }

    return true;
}

int main() {
    int y;
    std::cin >> y;
    int year = y + 1;
    
    while (true) {
        if (hasDistinctDigits(year)) {
            std::cout << year << std::endl;
            break;
        }
        year++;
    }
    
    return 0;
}