#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class DLL{
public:
    Node* head;
    Node* tail;
    int size;
    DLL(){
        head=tail=NULL;
        size=0;
    }
    void InsertAtTail(int val){
        Node* temp= new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev= tail; // extra
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
            head->prev=temp; //extra
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
            Node* t= new Node(val);
            Node* temp =head;
            for(int i=0;i<idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            t->prev= temp; //extra
            (t->next)->prev=t; //extra
        }
        size++;
        return;
    }
    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid index"<<endl;
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else {
            if(idx<=(size/2)){
                Node* temp= head;
                for(int i=1;i<=idx;i++){
                    temp = temp->next;
                }
                return temp->val;
            }
            else{    //idx>size/2
                Node* temp = tail;
                for(int i=1;i<(size-idx);i++){
                    temp= temp->prev;
                }
                return temp->val;
            }
            
        }
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
        if(head) head->prev= NULL; //extra
        if(head==NULL) tail= NULL;  //extra
        size--;
        return;
    }
    void DeleteTail(){
        if(size==0){
            cout<<"Invalid operation"<<endl;
            return;
        }
        else if(size==1){
            DeleteHead();
            return;
        }
        Node* temp= tail->prev;
        temp->next=NULL;
        tail= temp;
        size--;
        return;
    }
    void DeleteAtIndex(int idx){
        if(size==0){
            cout<<"List is empty"<<endl;
            return;
        }
        else if(idx<0 || idx>=size){
            cout<<"Invalid Index";
            return;
        }
        else if(idx==0){
            return DeleteHead();
        }

        else if(idx==size-1){
            return DeleteTail();
        }
        else {
            Node* temp=head;
            for(int i=0;i<idx-1;i++){
                temp = temp->next;
            }
            temp->next = (temp->next)->next;
            (temp->next)->prev=temp; // extra
        }
        size--;
        return;
    }

};
int main(){
    DLL list;
    list.InsertAtTail(10);
    list.InsertAtTail(20);
    list.InsertAtTail(30);
    //list.Display();
    list.InsertAtTail(40);
   // list.Display();
    list.InsertAtHead(50);
    //list.Display();
    list.InsertAtIndex(2,60);
    //list.Display();
    list.DeleteTail();
    //list.Display();
    list.DeleteHead();
    //list.Display();
    list.InsertAtTail(90);
    //list.Display();
    list.DeleteAtIndex(3);
    //list.Display();
    list.InsertAtTail(40);
    list.InsertAtTail(50);
    list.Display();
    cout<<list.getAtIdx(4);
}