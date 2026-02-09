#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4,1,2,5,4,5,4,8,2,7};
    stack<int> st;
    int n= sizeof(arr)/sizeof(arr[0]);
    int nge[n];
    nge[n-1]=-1;
    st.push(nge[n-1]);
    for(int i=n-2;i>=0;i++){
        while(arr[i]>=st.top()&& st.size()>0) st.pop();

    }
}