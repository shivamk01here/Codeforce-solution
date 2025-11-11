#include <iostream>

void solve() {
     int n;
     std::cin >> n;
     
     int size = 2 * n;
     
     for (int r = 0; r < size; ++r) {
         for (int c = 0; c < size; ++c) {
             int block_row = r / 2;
             int block_col = c / 2;
             
             if ((block_row + block_col) % 2 == 0) {
                 std::cout << '#';
             } else {
                 std::cout << '.';
             }
         }
         std::cout << '\n';
     }
 }
 
 int main() {
     std::ios_base::sync_with_stdio(false);
     std::cin.tie(NULL);
     
     int t;
     std::cin >> t;
     while (t--) {
         solve();
     }
     return 0;
 }