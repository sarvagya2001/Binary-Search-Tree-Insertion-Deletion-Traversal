#include <iostream>
using namespace std;

struct node{
    int info;
    node *left,*right;
};
node *start=NULL;

node *create(int data){
    node *n=new node;
    n->info=data;
    n->left=n->right=NULL;
    return n;
}

void insert(node *n){

    node *find=start,*ptr;
    
    if(start==NULL){
        start=n;
    }
    else{
        while(find!=NULL){
            ptr=find;
            if(find->info<n->info){
                find=find->right;
            }
            else{
                find=find->left;
            }
        }
        if(find==NULL){
            if(ptr->info<n->info){
                ptr->right=n;
            }
            else{
                ptr->left=n;
            }
        }
    }cout<<ptr->info;
}

int main() {
    int num;
    cout<<"enter data";
    cin>>num;
    node *n=create(num);
    insert(n);
}
