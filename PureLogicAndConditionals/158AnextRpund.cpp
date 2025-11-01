#include <iostream>
#include<vector>
using namespace std;

int main() {
    int total;
    int k;
    cin>>total>>k;
    
    int i = 0;
    int passed = 0;
    vector<int>scores;
    
    while(i<total){
        int score;
        cin>>score;
        scores.push_back(score);
        i++;
    }
    
    for(int s: scores){
        if(s>=scores[k-1] && s > 0){
            passed++;
        }
    }
    
    cout<<passed;
    
    return 0;
}
