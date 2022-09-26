#include <iostream>
using namespace std;
int main(){
    int a,b;
    while(true){
        cin>>a>>b;
        if(a==EOF){
            break;
        }
        cout<<a*b*2<<endl;
    }
    return 0;
}