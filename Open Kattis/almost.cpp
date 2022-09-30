#include <iostream>
using namespace std;

int set[100000];
int key;
void init(int n){
    for(int i=0;i<n;i++){
        set[i]=i;
    }
}
int find(int x,int key){
    if(set[x]==x){
        return x;
    }
    return set[x]=find(set[x],key);
}
bool join(int x,int y){
    if(set[x]==x && set[y]==y){
        set[x]=key;
        set[y]=key;
        key++;
        return true;
    }else if(set[x]==x ||){

    }
    x=find(x);
    y=find(y);
    if(x==y){
        return false;
    }
    set[y]=x;
    return true;
}

int main(){
    int p,q,r,s,t,con,sum;
    while(cin>>p>>q){
        init(p);
        for(int i=0;i<q;i++){
            cin>>r;
            if(r==1){
                cin>>s>>t;
                join(s-1,t-1);
                //print(p);
            }else if(r==2){
                cin>>s>>t;
                move(s-1,t-1);
                //print(p);
            }else{
                cin>>s;
                con=0;
                sum=0;
                s=set[s-1];
                for(int i=0;i<p;i++){
                    if(set[i]==s){
                        con++;
                        sum+=(i+1);
                    }
                }
                //print(p);
                cout<<con<<" "<<sum<<'\n';
            }
        }
    }
    return 0;
}