#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;
int p[1000];
int answer[1000];

int diff(int n,int m){
    if(n>m){
        return n-m;
    }
    return m-n;
}

int closest(int n, int num){
    int r[num+1];
    r[0]=0;
    for(int i=1;i<num;i++){
        int q=INT_MAX;
        for(int j=0;j<n;j++){
            q=min(q,diff(i,p[j])+r[i-p[j]]);
        }
        r[i]=q;
    }
    for(int i=0;i<num+1;i++){
        cout<<r[i]<<" ";
    }
}

int  main(){
    p[0]=3;p[1]=12;p[2]=17;p[3]=33;p[4]=34;
    closest(5,31);
    /*
    int n,m,q,n_test=1;
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        cin>>m;
        closest(n,100);
        cout<<"Case "<<n_test<<":\n";
        for(int i=0;i<m;i++){
            cin>>q;
            cout<<"Closest sum to "<<q<<" is "<<answer[i]<<".\n";

        }
        n_test++;
    }
    */
    return 0;
}