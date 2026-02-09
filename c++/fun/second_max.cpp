#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[]={5,7,4,10,11,23,54};
    int f_max=5;
    int s_max= INT_MIN;
    for(int i=0;i<1;i++){
        if((arr[i]>s_max)&& (arr[i]!=f_max)){
            s_max=arr[i];
        }
    }
    cout<<s_max;

}