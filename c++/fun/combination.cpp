#include<bits/stdc++.h>
using namespace std;
int combi(int n,int r){
    if(n==r) return 1;
    return (combi(n,r)+combi(n,r+1));
}
int main(){
    //int ans=combi(4,3);
    //cout<<ans;
    cout<<(char)65;
}