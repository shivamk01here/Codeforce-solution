#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    std::vector<bool> levels_passed(n + 1, false);

    int p, level_index;
    
    std::cin >> p;
    for (int i = 0; i < p; ++i) {
        std::cin >> level_index;
        levels_passed[level_index] = true; 
    }

    // Read Little Y's levels
    int q;
    std::cin >> q;
    for (int i = 0; i < q; ++i) {
        std::cin >> level_index;
        levels_passed[level_index] = true; 
    }

    bool all_levels_passed = true;
    for (int i = 1; i <= n; ++i) {
        if (!levels_passed[i]) {
            all_levels_passed = false;
            break;
        }
    }

    if (all_levels_passed) {
        std::cout << "I become the guy." << std::endl;
    } else {
        std::cout << "Oh, my keyboard!" << std::endl;
    }

    return 0;
}