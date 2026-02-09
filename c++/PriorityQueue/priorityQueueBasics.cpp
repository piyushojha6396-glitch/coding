#include<bits/stdc++.h>
using namespace std;

class PriorityQueue{
    vector<int> v;
    int idx;
public:
    PriorityQueue(){
        idx=1;
    }
    void push(int x){
        v.push_back(x);
    }
    void pop(){
        v.pop_back();
    }
    void display(){
        for (int ele:v){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
};
int main(){
    PriorityQueue pq;
    pq.push(40);
    pq.push(30);
    pq.push(10);
    pq.push(5);
    pq.display();
    pq.pop();
    pq.display();
}