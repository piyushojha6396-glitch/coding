#include <bits/stdc++.h>
using namespace std;
#define int long long

int cnt_0=0;



void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    vector<int>v_1;
    for(int i=0;i<n;i++){
        if (s[i]=='1') {
            v_1.push_back(i);
        }
        else cnt_0++;
    }

    int gap= 0;

    if (v_1.empty()) {
        cout << (n + 2) / 3 << endl;
        return;
    }

    int pref_zero=v_1[0]; 
    gap += (pref_zero+1)/3; 

    for(int i=0;i<v_1.size()-1;i++){
        int gap_0= v_1[i+1]- v_1[i]-1;
        gap += gap_0/3; 
    }

    int suff_zero=(n-1)- v_1.back();

    gap += (suff_zero+1)/3; 

    cout<<v_1.size()+ gap<<endl;

    return;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        solve();
    }
    return 0;
}