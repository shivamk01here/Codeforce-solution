#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> arr;
    int i = 0;
    while(i<4){
        int num;
        cin>>num;
        arr.push_back(num);
        i++;
    }
    
    sort(arr.begin(), arr.end());
    int a = arr[3]-arr[2];
    int b = arr[3]-arr[1];
    int c = arr[3]-arr[0];
    
    cout<<a<<" "<<b<<" "<<c;
    
    return 0;
}
