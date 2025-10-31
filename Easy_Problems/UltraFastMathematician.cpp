#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string a, b;
    std::cin >> a >> b;

    std::string result = "";
    
    for (size_t i = 0; i < a.length(); ++i) {
        if (a[i] != b[i]) {
            result += '1';
        } else {
            result += '0';
        }
    }

    std::cout << result << "\n";
    
    return 0;
}