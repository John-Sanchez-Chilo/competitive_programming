#include <iostream>
using namespace std;

int difference(int a, int b){
    if (a < b) return b - a;
    return a - b;
}

int main(){
    string a;
    while(true){
        cin>>a;
        if(a=="\n"){
            break;
        }
        cout<<a<<endl;
    }
    return 0;
}