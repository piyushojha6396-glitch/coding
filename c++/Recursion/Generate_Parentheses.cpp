#include<bits/stdc++.h>
using namespace std;
vector<string> parentheses(vector<string> &ans,string s,int opbrkt,int clbrkt,int n){
    vector<string> ans;
    if(clbrkt==n){
        //cout<<s<<endl;
        ans.push_back(s);
        return ans;
    }
    if(opbrkt<n){
        parentheses(ans,s+'(',opbrkt+1,clbrkt,n);

    }
    if(clbrkt<opbrkt){
        parentheses(ans,s+')',opbrkt,clbrkt+1,n);

    }
}
int main(){
    int n=4;
    vector<string> ans;
    
}
