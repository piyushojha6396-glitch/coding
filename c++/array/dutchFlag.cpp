#include<iostream>
#include<vector>
using namespace std;
void sortDutch(vector<int> &v){
    int n = v.size();
    int i=0;
    int j=n-1;
    while(i<j){
        int mid=(i+j)/2;
        if(v[i]==0) i++;
        else if(v[j]==2) j--;
        else if(v[i]!=0 && v[j]!=2 && v[mid]!=1){
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
    vector<int> v={2,0,2,1,1,0};
    display(v);
    sortDutch(v);
    display(v);

}

