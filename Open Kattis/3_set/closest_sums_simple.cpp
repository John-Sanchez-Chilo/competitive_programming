#include <iostream>
using namespace std;

long long p[1000];
int main(){
    long long n,m,q,tmp,min_sum,n_test=1;
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        cin>>m;
        cout<<"Case "<<n_test<<":\n";
        for(int i=0;i<m;i++){
            cin>>q;
            min_sum=p[0]+p[1];
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    tmp=p[i]+p[j];
                    if(abs(min_sum-q)>abs(tmp-q)){
                        min_sum=tmp;
                    }
                }
            }
            cout<<"Closest sum to "<<q<<" is "<<min_sum<<".\n";

        }
        n_test++;
    }
    return 0;
}
