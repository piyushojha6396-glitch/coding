#include<stdio.h>
int main(){
    int arr1[2][2],arr2[2][2],arr3[2][2];
    printf("enter the elements of the matrix....");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d %d ",&arr1[i][j],&arr2[i][j]);


        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                printf("%d ",arr3[i][j]);
            }
        }

    
}