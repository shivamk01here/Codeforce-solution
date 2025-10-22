#include <iostream>
#include <vector>

int main() {
    int n, k;
    std::cin >> n >> k;

    std::vector<int> scores(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> scores[i];
    }

    int k_score = scores[k - 1];

    int advancers = 0;

    for (int score : scores) {
        if (score > 0 && score >= k_score) {
            advancers++;
        }
    }

    std::cout << advancers << std::endl;

    return 0;
}
