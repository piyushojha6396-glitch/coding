#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int neven=0;
    int nodd=0;
    int eveidx=-1;
    int oddidx=-1;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            neven++;
            eveidx=i;
        }
        else{
            nodd++;
            oddidx=i;
        }
    }
    if(neven<nodd){
        cout<<eveidx+1<<endl;
    }
    else {
        cout<<oddidx+1<<endl;
    }
}
