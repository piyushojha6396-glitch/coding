#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pi;
vector<int> topKFrequent(vector<int>& arr, int k) {
    unordered_map<int,int>mp;
    for(int ele:arr){
        mp[ele]++;

    }
    priority_queue<pi,vector<pi>,greater<pi>>pq;
    //min heap
    for(auto it:mp){  // min heap me hum {freq,ele} order me push kr rhe h 
        int ele=it.first;
        int freq= it.second;
        pq.push({freq,ele});
        if(pq.size()>k) pq.pop();
    }
    vector<int>ans;
    while(pq.size()>0){
        int ele= pq.top().second;
        ans.push_back(ele);
        pq.pop();
    }
    return ans;
}
int main(){
    vector<int>arr = {1,2,1,2,1,2,3,1,3,2};
    vector<int>ans=topKFrequent(arr,2);
    for(int ele:ans){
        cout<<ele<<" ";
    }

}