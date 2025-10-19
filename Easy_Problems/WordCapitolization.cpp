#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string s;
    std::cin >> s;
    
    if (!s.empty()) {
        s[0] = toupper(s[0]);
    }
    
    std::cout << s << std::endl;
    
    return 0;
}