#include <iostream>
using namespace std;

int set[100000];
void init(int n){
    for(int i=0;i<n;i++){
        set[i]=i;
    }
}

int find(int x){
    if(set[x]==x){
        return x;
    }
    return set[x]=find(set[x]);
}

bool join(int x,int y){
    x=find(x);
    y=find(y);
    if(x==y){
        return false;
    }
    set[y]=x;
    return true;
}

bool move(int x,int y){
    x=find(x);
    y=find(y);
    if(x==y){
        return false;
    }
    if(find(x)==x){
        return true;
    }
    set[x]=find(y);
    return true;
}

int sum(int x,int n){
    int con=0;
    int sum=0;
    x=find(x);
    for(int i=0;i<n;i++){
        if(set[i]==x){
            con++;
            sum+=set[i];
        }
    }
}

void print(int n){
    for(int i=0;i<n;i++){
        cout<<set[i]<<" ";
    }
    cout<<'\n';
}

int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(NULL); cout.tie(NULL);
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