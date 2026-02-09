#include<stdio.h>
int main()
{
    int r,c;  //c--->column and r--->row
    printf("enter the row and column of matrix 1\t");
    scanf("%d%d",&r,&c);
    int mat_1[r][c];                                  //taking elements in matrix 1
    printf("enter the elements of the matrix\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&mat_1[i][j]);
        }
    }
    //In transpose of a matrix row gets converted into column and column get converted into row
    int transpose[c][r];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            transpose[i][j]=mat_1[j][i];
        }

    }
    printf("the transpose matrix will be...\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }

}