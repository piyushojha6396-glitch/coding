#include<stdio.h>
int main()
{
    int r1,c1;
    printf("enter the row and column of matrix 1\t");
    scanf("%d%d",&r1,&c1);
    int mat_1[r1][c1];                                  //taking elements in matrix 1
    printf("enter the elements of the matrix\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&mat_1[i][j]);
        }
    }
    int r2,c2;
    printf("enter the row and columns of matrix 2\t");
    scanf("%d %d",&r2,&c2);
    int mat_2[r2][c2];
    printf("enter the elements of matrix two\n");
    for(int i=0;i<r2;i++){                             //taking elements in matrix 2
        for(int j=0;j<c2;j++){
            scanf("%d",&mat_2[i][j]);
        }

    }
    if(c1!=r2){
        printf("multiplication not possible");
    }
    else{
        int mat_3[r1][c2];
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                int value=0;
                for(int k=0;k<r2;k++){
                    value+=mat_1[i][k]*mat_2[k][j];       //performming the multiplication of matrix 1 and matrix 2
                }
                mat_3[i][j]=value;                       // storing the answer in matirx 3....
            }
        }
        printf("elements in matrix 3 after multiplication\n");
        for(int i=0;i<r1;i++){                                  //displaying the matrix 3 which contain the matrix multiplication...
            for(int j=0;j<c2;j++){
                printf("%d ",mat_3[i][j]);
            }
            printf("\n");
        }
    }
}