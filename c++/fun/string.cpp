#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    bool flag=false;
    for(int i=0;i<s.length();i++){
        int d=0;
        for(int j=0;j<s.length();j++){
            if((i!=j)&&(s[i]==s[j])){
                d++;
                break;
            }
        }
        if(d==0){
            flag=true;
            cout<<s[i];
            break;
        }
    }
    if(flag==false) cout<<-1;
}