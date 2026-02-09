#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* right;
    Node* left;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;

    }
    /*
    10
    20 30
    40 50 60 70
    80 90 100 110 120 
    */

};
void Display(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    Display(root->left);
    Display(root->right);
    
}
int main(){
    Node* a= new Node(10);
    Node* b= new Node(20);
    Node* c= new Node(30);
    Node* d= new Node(40);
    Node* e= new Node(50);
    Node* f= new Node(60);
    Node* g= new Node(70);
    Node* h= new Node(80);
    Node* i= new Node(90);
    Node* j= new Node(100);
    Node* k= new Node(110);
    Node* l= new Node(120);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    d->left= h;
    d->right=i;
    e->left=j;
    e->right=k;
    f->left=k;
    Display(a);

}
