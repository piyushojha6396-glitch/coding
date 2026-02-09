#include<iostream>
using namespace std;
void input(int arr[3][3]){
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
}
void display(int a[3][3]){
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[3][3];
    input(arr);
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            if(i>j){
                swap(arr[i][j],arr[j][i]);
            }
        }
    }
    display(arr);

}