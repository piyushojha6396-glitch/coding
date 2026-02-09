#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void DisplayTree(Node* root){
    if(root==NULL) return ;
    cout<<root->val<<" ";
    DisplayTree(root->left);
    DisplayTree(root->right);
}
int TreeSize(Node* root,int size){
    if(root== NULL) return size;
    TreeSize(root->left,size+1);
    TreeSize(root->right,size+1);
}
int main(){
    Node* a= new Node(40);
    Node* b= new Node(25);
    Node* c= new Node(70);
    Node* d= new Node(22);
    Node* e= new Node(30);
    Node* f= new Node(60);
    Node* g= new Node(85);
    Node* h= new Node(10);
    Node* i= new Node(80);
    Node* j= new Node(90);
    a->left = b;
    a->right = c;
    b->left= d;
    b->right= e;
    c->left= f;
    c->right=g;
    d->left= h;
    g->left=i;
    g->right= j;
    DisplayTree(a);
    cout<<endl;
    cout<<TreeSize(a,0)<<endl;
}