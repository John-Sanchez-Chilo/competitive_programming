#include <iostream>
using namespace std;

int set[30005];
int maximun[30005];
void init(int n){
    for(int i=0;i<n;i++){
        set[i]=i;
        maximun[i]=1;
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
    maximun[x]+=maximun[y];
    return true;
}

int max(int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(maximun[i]>max){
            max=maximun[i];
        }
    }
    return max;
}

void print(int n){
    for(int i=1;i<n;i++){
        cout<<set[i]<<" ";
    }
    cout<<endl;
}
void print2(int n){
    for(int i=1;i<n;i++){
        cout<<maximun[i]<<" ";
    }
    cout<<endl;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int c,m,n,a,b;
    cin>>c;
    for(int i=0;i<c;i++){
        cin>>m>>n;
        init(m);
        for(int j=0;j<n;j++){
            cin>>a>>b;
            join(a,b);
        }
        //print(m+1);
        //print2(m+1);
        cout<<max(m)<<'\n';
    }
    return 0;
}