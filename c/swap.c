#include<stdio.h>
int swap(int *x,int *y){
    int tem=*y;
    *y=*x;
    *x=tem;
    printf("\nthe values after swap\nx=%d\ny=%d",*x,*y);
    

}
int main(){
    int x,y;
    printf("enter the values of x and y: ");
    scanf("%d %d",&x,&y);
    printf("\nbefore swapping\n");
    printf("x=%d\ny=%d",x,y);
    swap(&x,&y);
    printf("\nafter swapping");
    printf("\nx=%d,y=%d",x,y);

    

}