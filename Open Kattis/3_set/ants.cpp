#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int c,n,m,p,min_a,max_a;
    cin>>c;
    for(int i=0;i<c;i++){
        cin>>n>>m;
        min_a=0;
        max_a=0;
        for(int j=0;j<m;j++){
            cin>>p;
            min_a=max(min_a,min(n-p,p));
            max_a=max(min_a,max(n-p,p));
        }
        cout<<min_a<<" "<<max_a<<"\n";
    }
    
}