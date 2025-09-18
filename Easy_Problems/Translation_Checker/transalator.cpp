#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    string rev = string(s.rbegin(), s.rend());

    if (rev == t) cout << "YES";
    else cout << "NO";

    return 0;
}
