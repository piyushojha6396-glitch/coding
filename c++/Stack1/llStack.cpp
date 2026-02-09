#include<bits/stdc++.h>
using namespace std;

class Node{   // user defined data type...
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class Stack{    // user dedined data structure
public:
    Node* head;
    int size;
    Stack(){   // constructor hain...
        this->size=0;
        this->head= NULL;
    }
    void push(int val){
        Node* temp= new Node(val);
        temp->next= head;
        head= temp;
        size++;
    }
    void pop(){
        if(head==NULL){
            cout<<"Stack is empty"<<endl;
            return;
        }
        head = head->next;
        size--;
    }
    int top(){
        if(head==NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return head->val;
    }
    void display(){
        Node* t= head;
        while(t!=NULL){
            cout<<t->val<<" ";
            t= t->next;
        }
    }

};
int main(){
    Stack st;
    cout<<st.top()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    cout<<st.size<<endl;
    cout<<st.top()<<endl;
    st.display();

}