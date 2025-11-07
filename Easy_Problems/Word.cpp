#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string s;
    std::cin >> s;

    int upper_count = 0;
    int lower_count = 0;

    for (char c : s) {
        if (isupper(c)) {
            upper_count++;
        } else {
            lower_count++;
        }
    }

    if (upper_count > lower_count) {
        for (char &c : s) {
            c = toupper(c);
        }
    } else {
        for (char &c : s) {
            c = tolower(c);
        }
    }

    std::cout << s << "\n";

    return 0;
}