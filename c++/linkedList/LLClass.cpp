#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void InsertAtTail(int val){
        Node* temp= new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
        return;
    }
    void InsertAtHead(int val){
        Node* temp=new Node(val);
        if(size==0) head = tail= temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;

    }
    void InsertAtIndex(int idx,int val){
        if(idx<0 || idx>size){
            cout<<"Invalid Printing";
            return;
        }
        else if(idx==0){
            InsertAtHead(val);
            return;
        } 
        else if(idx==size){
            InsertAtTail(val);
            return;
        } 
        else{
            Node* temp= new Node(val);
            Node* t =head;
            for(int i=0;i<idx-1;i++){
                t=t->next;
            }
            temp->next=t->next;
            t->next=temp;
        }
        size++;
        return;
    }
    void Display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp= temp->next;
        }
        cout<<endl;
        return;

    }
    int SizeOfLL(){
        int size=0;
        Node* temp=head;
        while(temp!=NULL){
            size++;
            temp= temp->next;
        }
        return size;
    }
    void DeleteHead(){
        if(size==0){
            cout<<"Invalid operation"<<endl;
            return;
        }
        head = head->next;
        size--;
        return;
    }
    void DeleteTail(){
        if(size==0){
            cout<<"Invalid operation"<<endl;
            return;
        }
        Node* temp= head;
        while(temp->next!=tail){
            temp= temp->next;
        }
        temp->next= NULL;
        tail=temp;
        size--;
        return;
    }
    void DeleteAtIndex(int idx){
        if(idx==0){
            DeleteHead();
            return;
        }
        else if(idx==size-1){
            DeleteTail();
            return;
        }
        else {
            Node* temp=head;
            for(int i=0;i<idx-1;i++){
                temp = temp->next;
            }
            temp->next = (temp->next)->next;
        }
        size--;
        return;
    }

};
int main(){
    // Node* a=new Node(10);
    // Node* a=new Node(10);
    // Node* a=new Node(10);
    // Node* a=new Node(10);
    LinkedList ll;
    ll.InsertAtTail(10);
    ll.InsertAtTail(20);
    ll.InsertAtTail(30);
    ll.InsertAtTail(40);
    ll.InsertAtTail(50);
    ll.Display();
    ll.InsertAtHead(5);
    ll.Display();
    ll.InsertAtHead(9);
    ll.Display();
    ll.InsertAtIndex(2,80);
    ll.Display();
    ll.InsertAtIndex(0,20);
    ll.Display();
    ll.InsertAtIndex(9,60);
    ll.Display();
    ll.DeleteHead();
    ll.Display();
    ll.DeleteHead();
    ll.Display();
    ll.DeleteTail();
    ll.Display();
    ll.DeleteAtIndex(1);
    ll.Display();
    // ll.DeleteAtIndex(0);
    // ll.Display();

    //cout<<ll.SizeOfLL();
    
    /*
    vector<int > v(5,1); ->vector creation it is a data structure
    v.push_back(5);
    v.push_back(10);
    v.pop();
    v.size(); / v.capacity();
    linkedlist ll;
    ll.insetelement(50) 
    */

}