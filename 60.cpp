#include <iostream>
#include <map>
using namespace std;
int main(){
    map <string, int_fast32_t> mp;
    mp["Aryan"] = 5;
    mp["Anurag"] = 2;
    mp["Ashish"] = 9;
    mp.insert( {"Abhi", 1} );
    for( auto it: mp){
        cout << it.first<< " \t"<<it.second<<endl;
    }
    return 0;
}