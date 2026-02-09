#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val= val;
        this->left= NULL;
        this->right= NULL;
    }
};
Node* construct(int arr[],int n){
    queue<Node*> q;
    Node* root= new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0){
        Node* temp= q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i]!=INT_MIN && i<n) {
            l= new Node(arr[i]);
            q.push(l);
        }
        else l=NULL;
        if(arr[j]!= INT_MIN && j<n){

            r= new Node(arr[j]);
            q.push(r);

        } 
        else r=NULL;
        temp->left=l;
        temp->right=r;
        i+=2;
        j+=2;

    }
    return root;

}
int level(Node* root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}
void preoder(Node* root){
    if(root==NULL) return ;
    cout<<root->val<<" ";
    preoder(root->left);
    preoder(root->right);

}
int size(Node* root){
    if(root==NULL) return 0;
    return 1+size(root->left)+ size(root->right);
}
int main(){
    int arr[]={1,2,3,4,5,INT_MIN,7,8,9,10,11,14,15};
    int n= sizeof(arr)/sizeof(arr[0]);
    Node* root= construct(arr,n);
    //preoder(root);
    cout<<level(root)<<endl;
    cout<<size(root)<<endl;
}