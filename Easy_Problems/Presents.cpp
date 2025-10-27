#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> givers(n + 1);

    for (int giver = 1; giver <= n; ++giver) {
        int receiver;
        std::cin >> receiver;
        
        givers[receiver] = giver;
    }

    for (int i = 1; i <= n; ++i) {
        std::cout << givers[i] << " ";
    }
    std::cout << std::endl; 

    return 0;
}