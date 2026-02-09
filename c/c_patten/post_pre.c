#include<stdio.h>
int main()
{
    int a[]={7,2,3,4,5};
    printf("\n%d",*a);          //*a+1--->2
    printf("\n%d",(*a)++);     //*a++
    printf("\n%d",a[0]);
    printf("\n%d",*a);
    for(int i=0;i<5;i++){
        printf("\n%d",*(a+i));
    }
}