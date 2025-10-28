#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n; 

    string s;
    cin >> s; 

    int antonWins = 0;
    int danikWins = 0;

    for (const char& gameResult : s) {
        if (gameResult == 'A') {
            antonWins++; 
        } else {
            danikWins++; 
        }
    }

    if (antonWins > danikWins) {
        cout << "Anton" << "\n";
    } else if (danikWins > antonWins) {
        cout << "Danik" << "\n";
    } else {
        cout << "Friendship" << "\n";
    }

    return 0;
}