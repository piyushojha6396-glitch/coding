#include<bits/stdc++.h>
using namespace std;
//2 10 20 32 40 90 
//10 20 90 32 2 40
//90 80 10 20 60 5 70 

int main(){
    unordered_set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(5);
    s.insert(70);
    s.insert(80);
    s.insert(10);
    s.insert(60);
    s.insert(90);
    if(s.find(100)!=s.end()){
        cout<<"exist";
    }
    else cout<<"not exist";
    
    // for(int ele:s){
    //     cout<<ele<<" ";
    // }


}