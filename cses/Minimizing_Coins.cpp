#include<bits/stdc++.h>
using namespace std;

vector<int> dp;
vector<int>coins;
int f(int x){
    if(x==0) return 0;
    if(dp[x]!=-2) return dp[x];

    int result= INT_MAX;
    for(int i=0;i<coins.size();i++){
        if(x-coins[i]<0) continue;
        result=min(result,f(x-coins[i]));
    }
    if(result==INT_MAX) return dp[x]=-1;
    return dp[x]=1+result;

}

int main(){
    int n,x;
    cin>>n>>x;
    coins.clear();

    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        coins.push_back(q);
    }
    dp.clear();
    dp.resize(1000005,-2);
    cout<<f(x)<<endl;
    

}