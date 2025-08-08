#include<iostream>
#include<vector>
using namespace std;
int main(){
//  vector <int> v = {10, 20, 30, 40, 50}; //static allocation
    vector<int> *v = new vector<int>; //dynamic allocation
    v->push_back(10);
    (*v).push_back(20);
    v->resize(4);  // used to reallocate memory blocks dynamically.
    (*v)[2] = 30;
    (*v)[3] = 40;
    for(auto i: *v)
    cout << i <<" ";
    return 0;
}