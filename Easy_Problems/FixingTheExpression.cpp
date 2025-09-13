#include <iostream>
#include <string>
using namespace std;

bool is_true(char a, char op, char b) {
    if (op == '<') return a < b;
    if (op == '>') return a > b;
    if (op == '=') return a == b;
    return false;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        char a = s[0], op = s[1], b = s[2];
        
        if (is_true(a, op, b)) {
            cout << s << "\n";
            continue;
        }
        
        if (a < b) {
            cout << a << '<' << b << "\n";
        } else if (a > b) {
            cout << a << '>' << b << "\n";
        } else { 
            cout << a << '=' << b << "\n";
        }
    }
    
    return 0;
}