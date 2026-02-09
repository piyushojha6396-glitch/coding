#include <bits/stdc++.h>
using namespace std;
// int mystry(vector<int>&v,int n){
//     if(n==1) return 0;
//     int ops=0;
//     sort(v.begin(),v.end());
//     for(int i=0;i<n-1;i++){
//         if(v[i]==v[i+1]) ops++;
//     }  
//     return ops;  
// }


int main() {
    string arr[]={"pea","pen","peacock","perimeter","per","perennial"};
    for(int i=0;i<6;i++){
        string str= arr[i];
        unordered_map<char,int>mp;
        for(int i=0;i<str.length();i++){
            mp[str[i]]++;
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            cout<<it->first<<" "<<it->second<<" ";
        }
        cout<<endl;

    }
    //string str="aastha";
    // map<char,int>mp;
    // for(int i=0;i<str.length();i++){
    //     mp[str[i]]++;
    // }
    // for(auto it=mp.begin();it!=mp.end();it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

}
