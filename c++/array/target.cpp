#include <bits/stdc++.h>
#include<vector>
int main(){
    int nums[]={11,7,3,5,2};
    int i=0;
    int j=sizeof(nums)/4-1;
    while(i<=j){
            if(nums[i]+nums[j]==target){
                return {i,j};
                i++;
                j--;
            }
            else if(nums[i]>target) i++;
            else if(nums[j]>target) j--;

}
       
        