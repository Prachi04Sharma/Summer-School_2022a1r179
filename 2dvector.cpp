#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<vector<int>> v;
//    vector < data_type > v;
    return 0;
    v.push_back( {10,20,30});
    v.push_back({40, 50, 60});
    for(auto x: v){
        for(auto y: x){
            cout << y << " ";
        }
        cout << endl;
    }
}