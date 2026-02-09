#include<iostream>
using namespace std;
void display(int a[],int size){
    for(int i=0;i<=size-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void change(int b[],int size){
    b[0]=5;
}
int main(){
    int arr[]={1,2,4,5,33,2,1,7};
    int size=sizeof(arr)/4;
    display(arr,size);
    change(arr,size);
    display(arr,size);
}