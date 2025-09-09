#include <iostream>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;
    int total = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a <= h) total += 1;
        else total += 2;
    }

    cout << total << endl;
    return 0;
}
