#include <iostream>
#include<vector>

using namespace std:

public:
 int fibbonaci(n, vector<int>& dp){
     
     if(n==0 || n==1 ){
        return 1;
     }

     if(dp[n]!=-1){
        return dp[n];
     }

     dp[n] = fibbonaci(n-1, dp)+ fibbonaci(n-2, dp);
     return dp[n];

 }

int main(){
     int n;
     cin >> n;

     vector <int> dp(n+1, -1);

     cout << fibbonaci(n, dp) << endl;

     return 0;

}