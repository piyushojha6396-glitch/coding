#include<iostream>
#include<vector>
using namespace std;
void reverse(vector <int> v1){
    vector <int> v2;
    for(int i=v1.size()-1;i>=0;i--){
        v2.push_back(v1[i]);
    }
     for(int i=0;i<=v2.size()-1;i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    int n;
    cout<<"enter the size of the vector : ";
    cin>>n;
    cout<<"enter the elements of the vectors : ";
    for(int i=0;i<=n-1;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    reverse(v);
}