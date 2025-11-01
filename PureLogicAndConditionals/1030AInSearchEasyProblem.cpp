#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int i = 0;
    
    while(i<n){
        i++;
        int opinion;
        cin>>opinion;
        
        if(opinion==1){
            cout<<"HARD";
            return 0;
        }
    }
    cout<<"EASY";
    
    return 0;
}
