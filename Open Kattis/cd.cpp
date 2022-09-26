#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m,n,p;
    cin>>m>>n;
    while(m!=0 || n!=0){
        vector<int> array(m,0);
        for (int i=0; i<m; i++){
            cin>>p;
            array[p-1]++;
        }
        for (int i=0;i<n;i++){
            cin>>p;
            if(p<=m)
                array[p-1]++;
        }
        int con=0;
        for(int i=0;i<m;i++){
            if(array[i]!=2)
                con++;
        }
        cout<<m-con<<endl;
        cin>>m>>n;
    }
    return 0;
}