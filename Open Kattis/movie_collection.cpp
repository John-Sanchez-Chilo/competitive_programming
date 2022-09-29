#include <iostream>
using namespace std;

struct Nodo{
    Nodo *nodo;
    int value;
    Nodo(Nodo* n,int value){
        this->nodo=n;
        this->value=value;
    }
};

class LinkedList{
    private:
        Nodo *root;
    public:
        LinkedList(){
            root=nullptr;
        }
        LinkedList(int r){
            root=new Nodo(nullptr,r);
            for(int i=0;i<r-1;i++){
                root=new Nodo(root,r-i-1);
            }
        }

        void createNewNode(int value){
            Nodo *newnodo=new Nodo(nullptr,value);
            if(root==nullptr){
                root=newnodo;
            }else{
                root=new Nodo(root,value);
            }
            
        }

        int moveNode(int value){
            Nodo* tmp=root;
            Nodo* previo=nullptr;
            int con=0;
            while(tmp!=nullptr && tmp->value!=value){
                previo=tmp;
                tmp=tmp->nodo;
                con++;
            }
            previo->nodo=tmp->nodo;
            tmp->nodo=root;
            root=tmp;
            return con;
        }
};



int main(){
    int n,p,q,r,con;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p>>q;
        LinkedList lista(p);
        for(int j=0;j<q;j++){
            cin>>r;
            cout<<lista.moveNode(r)<<"\n";
        }
    }
    return 0;
}