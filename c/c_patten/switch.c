#include<stdio.h>
int main(){
    int a,b,result;
    printf("enter two numbers ");
    scanf("%d %d",&a,&b);
    printf("1---addition\n2----sub\n3----mul\n4-----div\nEnter your choice...");
    int ch;
    scanf("%d",&ch);
    switch(ch){
        case 1:
        result=a+b;
        break;
        case 2:
        result= a-b;
        break;
        case 3:
        result= a*b;
        break;
        case 4:
        result= a/b;
        break;
        default:
        printf("you have enter wrong choice  ");
        break;
    }
    printf("%d",result);
}


