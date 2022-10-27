#include <iostream>
using namespace std;
int p[30];
int main(){
    int n,a,b,c;
    string op;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    cin>>op;
    while(op!="END"){
        if(op=="RANGE"){
            cin>>a>>b>>c;
        }
        else if(op=="ADDR"){
            cin>>a;
        }else if(op=="STAT"){

        }
        cin>>op;
    }
    return 0;
}