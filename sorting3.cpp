#include<iostream>
using namespace std;
int main(){

    //pair <data_type, data_type> pair_name;
    pair <char,int> p[5];
        p[0].first = 'A';
        p[0].first = '1';
        p[1].first = 'B';
        p[1].first = '2';
        p[2].first = 'C';
        p[2].first = '3';
        p[3].first = 'D';
        p[3].first = '4';
        p[4].first = 'E';
        p[4].first = '5';
        for(int i = 0; i < 5; i++){
            cout <<p[i].first<<" "<<p[i].second<<endl;
        }
        return 0;
}