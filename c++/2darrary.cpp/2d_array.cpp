#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"how many rows you want\t";
    cin>>r;
    cout<<"how many column you want\t";
    cin>>c;
    int array[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>array[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

}

