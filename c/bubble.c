#include<stdio.h>

int swap(int *a,int *b){
    int tem=*a;
    *a=*b;
    *b=tem;
}
int main(){
    int i,n;
    printf("enter the size of an array ");
    scanf("%d",&n);
    int arr[n];
    printf("\nenter the elements of the array \n");
    for(i=0;i<n;i++){
        scanf("%d",(arr+i));
    }
    for(int j=0;j<n;j++){
        for(int k=j+1;k<n;k++){
            if(arr[j]>arr[k]){
                swap(&arr[j],&arr[k]);
            }
            
        }
    }
    for(int j=0; j<n; j++){
        printf("%d ",arr[j]);
    }

}