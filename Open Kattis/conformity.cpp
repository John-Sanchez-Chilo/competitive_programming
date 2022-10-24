#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    map<vector<int>,int> map;
    int n,p=0,q;
    cin>>n;
    for(int i=0;i<n;i++){
        vector<int> v(5);
        for(int j=0;j<5;j++){
            cin>>v[j];
        }
        sort(v.begin(),v.end());
        ++map[v];
        q=map[v];
        if(q>p){
            p=q;
        }
    }
    int con=0;
    for(auto &ele:map){
        if(ele.second==p){
            con++;
        }
    }
    cout<<p*con<<endl;
    return 0;
}   