#include <iostream>
typedef long long ll;


ll find_initial(ll target_x, int steps_left) {
    if (steps_left == 0) {
        return target_x;
    }
    ll x_prev_A = 2 * target_x;
    ll result = find_initial(x_prev_A, steps_left - 1);
    
    if (result != -1) {
        return result;
    }

    if (target_x % 3 == 1) {
        ll x_prev_B = (target_x - 1) / 3;
        
        if (x_prev_B > 0 && x_prev_B % 2 != 0) {
            result = find_initial(x_prev_B, steps_left - 1);
            if (result != -1) {
                return result;
            }
        }
    }
    return -1; 
}

void solve() {
    int k;
    ll x; 
    if (!(std::cin >> k >> x)) return;

    ll initial_value = find_initial(x, k);
    std::cout << initial_value << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    if (!(std::cin >> t)) return 0;
    while (t--) {
        solve();
    }

    return 0;
}