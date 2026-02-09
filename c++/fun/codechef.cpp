#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 998244353;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    unordered_set<char> s1,s2;
    s1.insert(s[0]);
    int i=1;
    while(i<n){
        if(!s1.count(s[i])){
            s1.insert(s[i]);
        }
        else break;
        i++;
    }
    if(s1.size()==n){
        cout<<s1.size()<<endl;
        return;
    }
    while(i<n){
        s2.insert(s[i]);
        i++;
    }
    cout<<s1.size()+s2.size()<<endl;

    return;
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}