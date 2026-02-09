#include<bits/stdc++.h>
using namespace std;
int main(){
    stack <int> st;
    // cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // printing in rev order -> stack empty ho gya iss method se
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    // we will use extra stack
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x= st.top();
        temp.push(x);
        st.pop();
    }
    while(temp.size()>0){
        int x= temp.top();
        temp.pop();
        st.push(x);
    }
}