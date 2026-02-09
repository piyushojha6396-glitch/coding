#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dp;
int f(int i,int j,int n,char grid[][100]){
    if(i==n-1 && j==n-1) return 1;
    if(i>=n || j>=n || grid[i][j]=='*') return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int right=f(i,j+1,n,grid);
    int down=f(i+1,j,n,grid);
    return dp[i][j]=(right+down)%1000000007;
}

int main(){
    int n;
    cin>>n;
    dp.clear();
    dp.resize(n,vector<int>(n,-1));
    char grid[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    cout<<f(0,0,n,grid)<<endl;
    return 0;
}