#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* ptr1=(int*)calloc(25,sizeof(int));
    printf("%p",ptr1);
    printf("\n%p",ptr1+1);

    int* ptr2=(int*)malloc(100*sizeof(int));
    printf("\n%p",ptr2);
    printf("\n%p",ptr2+1);
}