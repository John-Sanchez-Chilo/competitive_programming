#include <iostream>
using namespace std;
#define inf 10000
int M[10001], coins[101];
int main(){
    int c,money, n;
    cin>>c;
    for(int k=0; k<c; k++){
        cin>>money>>n;
        for(int i = 1; i <= n; i++){
            cin>>coins[i];
        }
            
        for(int i = 1; i <= 10000; i++){
            M[i] = inf;
        }
        M[0] = 0;

        for(int i = 1; i <= n; i++){
            for(int j = 10000; j > 0; j--){
                if(j - coins[i] >= 0 && M[j - coins[i]] + 1 < M[j]){
                    M[j] = M[j - coins[i]] + 1 ;
                }
            }
        }
        
        int r=money;
        while(M[r]==inf){
            r++;
        }
        cout<<r<<' '<<M[r]<<'\n';
    }
	return 0;
}