#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int function(int n, int m,int pos){
    if(m==1){
        return 1; 
    }
    if(pos==0){
        return function(n,m-1,pos)+function(n,m-1,pos+1);
    }
    else if(pos==n){
        return function(n,m-1,pos)+function(n,m-1,pos-1);
    }
    if(pos>0 && pos<n){
        return function(n,m-1,pos)+function(n,m-1,pos+1)+function(n,m-1,pos-1);
    }
}


double m[10][101];
double function2(int k,int n){
    for(int i=0;i<=k;i++){
        m[i][1]=1;
    }
    for(int j=2;j<=n;j++){
        for(int i=0;i<=k;i++){
            if(i==k){
                m[i][j]=m[i][j-1]+m[i-1][j-1];
            }else if(i==0){
                m[i][j]=m[i][j-1]+m[i+1][j-1];
            }else{
                m[i][j]=m[i][j-1]+m[i-1][j-1]+m[i+1][j-1];
            }
        }
    }
    long con=0;
    for(int i=0;i<=k;i++){
        con+=m[i][n];
    }
    return 100.0 * con / pow((double)k + 1, n);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout << fixed;
    cout << setprecision(5);
    int n, m;
    while(cin>>n>>m){
        cout<<function2(n,m)<<'\n';
    }
    return 0;
}