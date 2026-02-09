#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val= val;
        this->right=NULL;
        this->left=NULL;
    }
};
void displayTree(Node * root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}
void preorder(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";

}
void inorder(Node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
    
}
int size(Node* root){
    if(root==NULL) return 0;
    return 1+ size(root->left)+ size(root->right);
}
int level(Node* root){
    if(root==NULL) return 0;
    return 1+ max(level(root->left),level(root->right));
}
void printLevel(Node* root,int curr,int N){
    if(root==NULL) return;
    if(curr==N){
        cout<<root->val<<" ";
        return;

    }
    printLevel(root->left,curr+1,N);
    printLevel(root->right,curr+1,N);
}
int main(){
    Node* a= new Node(1);
    Node* b= new Node(2);
    Node* c= new Node(3);
    Node* d= new Node(4);
    Node* e= new Node(5);
    Node* f= new Node(6);
    Node* g= new Node(8);
    a->left = b;
    a->right = c;
    b->left=d;
    b->right=e;
    c->right=f;
    c->left=g;
    //cout<<size(a)<<endl;
    //displayTree(a);
    // postorder(a);
    // cout<<endl;

    // inorder(a);
    // cout<<endl;

    // preorder(a);
    int n=level(a);
    for(int i=1;i<=n;i++){
        printLevel(a,1,i);
        cout<<endl;

    }

}