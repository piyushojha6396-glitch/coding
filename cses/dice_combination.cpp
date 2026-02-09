#include<bits/stdc++.h>
# define ll long long int
# define mod 1000000007
using namespace std;
vector<int>dp;
int f(int n){
    if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    ll sum=0;
    for(int i=1;i<=6;i++){
        if(n-i<0) break;
        sum += f(n-i);
    }
    return dp[n]= sum%mod;

}

int main(){
    int n;
    cin>>n;
    dp.clear();
    dp.resize(1000005,-1);
    cout<<f(n)<<endl;
}