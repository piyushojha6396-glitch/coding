#include<bits/stdc++.h>
using namespace std;
vector<string> ans;

vector<string> f(string s,int opnbrk,int clsbkt){

    if(opnbrk==0 && clsbkt==0){// base case
        ans.push_back(s);
        return ans;

    }
    if(opnbrk==clsbkt){
        f('('+s,opnbrk-1,clsbkt);

    }
    if(opnbrk>0) f(s+'(',opnbrk-1,clsbkt);
    if(clsbkt>opnbrk) f(s+')',opnbrk,clsbkt-1);
}

int main(){
    int n;
    cin>>n;
    ans.clear();
    vector<string>result= f("",n,n);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}