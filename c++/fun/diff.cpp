#include <bits/stdc++.h>
using namespace std;

string s;
int lo;
int f(int l, int r) {
    while (l >= 0 && r < s.size() && s[l] == s[r]) {
        l--;
        r++;
    }
    return r-l-1;
}

int main() {
    cin >> s;
    int max_len=-1;

    for(int i=0;i<s.size()-1;i++){

        int curr_len= max(f(i,i),f(i,i+1));
        if(curr_len>max_len){
            max_len=curr_len;
            lo=i;
        }
    }
    cout<<s.substr(lo,max_len)<<endl;
    
}