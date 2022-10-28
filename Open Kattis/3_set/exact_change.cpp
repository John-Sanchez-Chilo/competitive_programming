#include <iostream>
#include <algorithm>
using namespace std;
int coins[100];
int main(){
    int c,p,n,q,j,con,ind,num;
    cin>>c;
    for(int i=0;i<c;i++){
        cin>>p;
        cin>>n;
        for( j=0;j<n;j++){
            cin>>coins[j];
        }
        sort(coins,coins+n);
        con=0;
        num=0;
        j=n-1;
        while(con<p && j>=0){
            if(con+coins[j]<p){
                ind=(p/coins[j]);
                con+=(coins[j]*ind);
                num+=ind;
            }
            j--;
        }
        if(con<p){
            con+=coins[0];
            num++;
        }
        cout<<con<<" "<<num<<endl;
    }
    return 0;
}