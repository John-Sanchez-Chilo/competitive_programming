#include <iostream>
#include <stack>
using namespace std;

bool function(string entry){
    stack<char> stack;
    for(int i=0;i<entry.size();i++){
        if(entry[i]=='('){
            stack.push(entry[i]);
        }
        if(entry[i]=='['){
            stack.push(entry[i]);
        }
        if(entry[i]==')'){
            if(stack.empty() || stack.top()!='('){
                return false;
            }
        }
        if(entry[i]==']' && (stack.empty() || stack.top()!='[') ){
            return false;
        }
    }
    if(stack.empty()){
        return true;
    }
    return false;
}

int main(){
    int n;
    string entry;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>entry;
        if(function(entry)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}