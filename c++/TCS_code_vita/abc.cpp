#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main() {
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[v[i]]=i;
        }
        int pref[n];
        pref[0]=v[0];
        for(int i=1;i<n;i++) pref[i]= pref[i-1]+v[i];
        int idx=0;
        for(int i=1;i<n;i++){
            if(mp.find(pref[i])!=mp.end()){
                swap(v[idx],v[mp[pref[i]]]);
                idx=mp[pref[i]];
            }
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
    }
    
}
