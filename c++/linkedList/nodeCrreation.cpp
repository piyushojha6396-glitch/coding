#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int val;
    node* next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }

};
class LinkedList{    // linked list as data structure
public:
    node* head;
    node* tail;
    int size;
    LinkedList(){ //constructor
        head = tail = NULL;
        size=0;
    }
    void InsertAtHead(int val){
        node* temp= new node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void InsertAtTail(int val){
        node* temp= new node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void display_linkedList(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp= temp->next;
        }
        cout<<endl;
    }
    void InsertAtIdx(int idx,int val){
        if((idx<0) && idx>size) {
            cout<<"Invalid";
            return;
        }
        
        else if(idx==0) InsertAtHead(val);
        else if(idx==size-1) InsertAtTail(val);
        else{
            node* temp=new node(val);
            node* t=head;
            for(int i=0;i<idx;i++){
                t=t->next;
            }
            temp->next=t->next;
            t->next=temp;
            size++;
        }

        
    }
};
// 10 20 30 90 590
//  5 10 20 30 90 40 590
int main(){
    // node* a= new node(10);
    // node* b= new node(20);
    // node* c= new node(30);
    // node* d= new node(40);
    // node* e= new node(50);
    // // a =b ;
    // // b=c;
    // // c=d;
    // // d=e;
    // a->next = b;
    // b->next =c;
    // c->next =d;
    // d->next = e;
    LinkedList ll;
    ll.InsertAtHead(30);
    ll.InsertAtHead(20);
    ll.InsertAtHead(10);
    ll.display_linkedList();
    ll.InsertAtTail(90);
    ll.InsertAtTail(590);
    ll.display_linkedList();
    ll.InsertAtIdx(3,40);
    ll.InsertAtIdx(0,5);
    ll.display_linkedList();
    //display_linkedList(a);    

}