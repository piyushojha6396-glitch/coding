#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dp;
vector<string>grid;
int n,m;
int f(int i,int j){
    if(i==n-1 && j==m-1) return 1;
    if(i>=n || j>=m) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int right=f(i,j+1);
    int down=f(i+1,j);
    return dp[i][j]=(right+down)%1000000007;
}
int main(){
    cin>>n>>m;
    dp.clear();
    dp.resize(n,vector<int>(m,-1));
    grid.clear();
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        grid.push_back(s);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]=='*') dp[i][j]=0;
        }
    }
    cout<<f(0,0)<<endl;
    return 0;
}