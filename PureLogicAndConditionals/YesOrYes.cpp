#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int i = 0;
    
    while(i<n){
    i++;
    string y;
    cin>>y;
    
    if(y.length()!=3){
        cout<< "NO" <<endl;
        continue;
    }
        
        if(tolower(y[0]) != 'y'){ cout<< "NO" << endl; continue;} 
        if(tolower(y[1]) != 'e'){ cout<< "NO" << endl; continue;}
        if(tolower(y[2]) != 's'){ cout<< "NO" << endl; continue;}
    
    cout<< "YES"<<endl;
    }
    
    
    return 0;
}
