#include <iostream>
using namespace std;

int main(){
 
       string name ;
       cin >> name;

       string UniqueName = name.set();
    
       if(UniqueName.size() % 2 == 0){
           cout << "CHAT WITH HER!" << endl;
       }
       else{
           cout << "IGNORE HIM!" << endl;
       }
}