#include<bits/stdc++.h>
using namespace std;
void RemoveDuplicate(string &s){
    if(s.length()==0) return ;
    stack <char>st;
    for(int i=0;i<s.length();i++){
        if(st.size()==0) st.push(s[i]);
        else{
            if(s[i]!=st.top()) st.push(s[i]);
            
        }
    }
}