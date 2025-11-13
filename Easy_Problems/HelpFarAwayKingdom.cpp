#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;

    int dot_pos = -1;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '.') {
            dot_pos = i;
            break;
        }
    }

    string integer_part = s.substr(0, dot_pos);
    string fractional_part = s.substr(dot_pos + 1);

    if (integer_part.back() == '9') {
        cout << "GOTO Vasilisa." << endl;
    } else {
        if (fractional_part[0] < '5') {
            cout << integer_part << endl;
        } else {
            int n = integer_part.length();
            integer_part[n - 1]++;
            cout << integer_part << endl;
        }
    }

    return 0;
}