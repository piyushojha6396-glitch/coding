#include<iostream>
using namespace std;
class Node{
public:
    int val;
    //string name;
    Node* next;
    Node(int val){
        this->val=val;
        //this->name = name;
        this->next=NULL;
    }
};

/*
Node = user defined data type :
int val;
Node *ptr;

Integer - primative data type
[1, 2, 3, 4, 5]
String - primitive data type
manish
piyush

int sum(int a, int b){
return a+b;
}

int s = sum(1, 2);


p = {-1, "", 100} 
[
{1, manish, 101}, {2, piyush, 102}, {3, name, NULL}, {int, name, 456}
]


*/

Node* create_node(int value){
    Node *a = new Node(value);
    a->next = NULL;
    return a;
}
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    // int value, n;
    // s    head = head->next;
    // }tring name;
    // Node *head = new Node(-1);
    // Node *p = head;
    // cin>>n;
    // for(int i=0; i<n; i++){
    //     cin>>value>>name;
    //     Node* node = create_node(value);
    //     head->next = node;
    
    
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    //Node *head = a;
    a->next=b;
    b->next = c;
    c->next = d;
    d->next = e;
    display(a);
    // p = p->next;
    // while(p != NULL){
    //     cout<<"value: "<<p->val;
    //     p = p->next;
    // }

}