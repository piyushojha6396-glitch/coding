#include<bits/stdc++.h>
using namespace std;
int main(){
    // string s;
    // cin>>s;
    // int n = s.length();
    // int sum=0;
    // vector<int> worth(n);
    // for(int i=0;i<n;i++){
    //     cin>>worth[i];
    // }
    // for(int k=0;k<n-1;k++){
    //     if(s[k]==s[k+1]){
    //         sort(worth.begin()+k,worth.begin()+(k+1));
    //         sum+=min(worth[k],worth[k+1]);
    //     }
    // }
    // cout<<sum<<endl;
    vector<int> a={5,15,3,4,10};
    sort(a.begin()+1,a.begin()+4);
    for(int ele:a){
        cout<<ele<<" ";
    }


}