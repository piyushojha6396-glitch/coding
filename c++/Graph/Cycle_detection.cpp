#include<bits/stdc++.h>
using namespace std;

pair<int,int> next_move(vector<vector<char>> &grid,pair<int,int> &pos){
    int i= pos.first;
    int j= pos.second;
    if(grid[i][j]=='U') i--;
    else if(grid[i][j]=='R') j++;
    else if(grid[i][j]=='D') i++;
    else j--;
    return {i,j};
}

bool val_move(vector<vector<char>> &grid,pair<int,int> &pos){
    int i= pos.first;
    int j= pos.second;
    if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()) return false;
    return true;
}

bool has_Cycle(vector<vector<char>> &grid){
    pair<int,int> slow= {0,0};
    pair<int,int> fast= {0,0};
    while(true){
        slow= next_move(grid,slow);
        if(! val_move(grid,slow)) return false;

        fast= next_move(grid,fast);
        if(! val_move(grid,fast)) return false;
        fast= next_move(grid,fast);
        if(! val_move(grid,fast)) return false;

        if(slow==fast) return true;

        
    }
    return false;

}

int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<char>> grid(m,vector<char>(n,'0'));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    bool ans= has_Cycle(grid);
    if(ans) cout<<"CYCLE FOUND";
    else cout<<"CYCLE NOT FOUND";


    return 0;
                                            
}
