#include <bits/stdc++.h>
using namespace std;

#define ll long long int

string emptyl() {
    string s;
    while (true) {
        if (!getline(cin, s)) return s;
        if (!s.empty()) return s;
    }
}
string encode(const vector<int>& v) {
    string s;
    for (int x:v) s +=char('A'+x); 
    return s;
}
vector<vector<int>> fxn(const vector<int>& a) {
    int n=a.size();
    vector<vector<int>> rest;
    for (int i=0;i<n;i++) {
        for (int j=i;j<n;j++) {
            vector<int> remd;
            for (int k=0;k<i;k++) remd.push_back(a[k]);
            for (int k=j+1;k<n;k++) remd.push_back(a[k]);
            for (int x=0;x<=(int)remd.size();x++) {
                vector<int> b;
                for (int k=0;k<x;k++) {
                    b.push_back(remd[k]);
                }
                for (int k=i;k<=j;k++) {
                    b.push_back(a[k]);
                }
                for (int k=x;k<(int)remd.size();k++) {
                    b.push_back(remd[k]);
                }
                if (b!=a) {
                    rest.push_back(b);
                }
            }
        }
    }
    return rest;
}
int f(vector<int> st,vector<int> gl) {
    if(st==gl) return 0;
    string s1=encode(st), s2=encode(gl);
    unordered_map<string,int> dist1,dist2;
    queue<vector<int>> q1,q2;
    dist1[s1]=0;
    dist2[s2]=0;
    q1.push(st);
    q2.push(gl);
    while (!q1.empty() && !q2.empty()) {
        if (q1.size()>q2.size())swap(q1, q2),swap(dist1,dist2);
        int sz=q1.size();
        while (sz--) {
            auto curr=q1.front(); q1.pop();
            int d=dist1[encode(curr)];
            for (auto next:fxn(curr)){
                string code=encode(next);
                if (dist1.count(code)) continue;
                dist1[code]=d+1;
                if (dist2.count(code)) return d+1+dist2[code];
                q1.push(move(next));
            }
        }
    }
    return -1;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    string line;
    getline(cin,line);
    string lbl=emptyl();
    vector<string> shu(n);
    for (int i=0;i<n;i++){
        shu[i]=emptyl();
    } 
    lbl=emptyl();
    vector<string> org(n);
    unordered_map<string,int> pos;
    for (int i=0;i<n;i++) {
        org[i]=emptyl();
        pos[org[i]]=i;
    }
    vector<int> v(n);
    for (int i=0;i<n;i++) {
        v[i]=pos[shu[i]];
    }
    vector<int> gl(n);
    iota(gl.begin(),gl.end(),0);
    cout<<f(v,gl)<<endl;
    return 0;
}