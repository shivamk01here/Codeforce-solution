#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int i = 0;
    
    while(i<n){
    i++;
    int hour;
    int min;
    
    cin>>hour>>min;
    
    cout<<(24*60)-(hour*60+min)<<endl;
    }

    return 0;
}
