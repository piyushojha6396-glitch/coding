#include<iostream>
#include<vector>
using namespace std;
void move(vector<int> &v){
    int n = v.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[i]<0) i++;
        else if(v[j]>0) j--;
        else if(v[i]>0 && v[j]<0){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }

    }

}
void display(vector<int> a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v={1,-2,3,-4,-5,6,8};
    display(v);
    move(v);
    display(v);
}