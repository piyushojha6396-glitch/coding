#include <bits/stdc++.h>
using namespace std;

int main(){
    string temp;
    int n;
    cin>>n;
    getline(cin, temp);
    
    getline(cin, temp);
    vector<string> shuffled(n), original(n);
    for (int i = 0; i < n; ++i) getline(cin, shuffled[i]);
    getline(cin,temp);
    for (int i=0;i<n; ++i) getline(cin, original[i]);

    unordered_map<string, int> pos;
    for (int i = 0; i < n; ++i) pos[shuffled[i]] = i;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) arr[i] = pos[original[i]];
    int count=0;
    for(int i=0;i<n;i++) cout<<arr[i]
    
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]+1) count++;
    }
    cout<<count-1<<endl;
    return 0;
}