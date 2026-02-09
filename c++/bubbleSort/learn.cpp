#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<char,int> mp;
        int idx=-1;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
            if(mp[s[i]]>1){
                idx=i-1;
                break;
            }
        }
        string s1 = s.substr(0,idx);
        string s2 = s.substr(idx+1);
        set<char> st;
        //for(char c: s1) st1.insert(c);
        for(char c: s2) st.insert(c);
        cout<<s1.size()+st.size()<<endl;
    }

}