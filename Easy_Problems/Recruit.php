#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int Police_officers_in_town = 0;
    int untracked_cases = 0;

    for(int i = 0 ; i<n; i++){
        int temp;
        cin>>temp;
        if(temp == -1 && Police_officers_in_town== 0){
           untracked_cases += 1;
        }
        else if(temp == -1 && Police_officers_in_town != 0){
           Police_officers_in_town -=1;
        }
        else if(temp != -1){
           Police_officers_in_town +=temp;
        }
    
    }
    
    cout<<untracked_cases<< endl;
    return 0;
    
}