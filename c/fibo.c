#include<stdio.h>
int fib(int n){
    if(n==0 || n==1) return n;
    int sum=fib(n-1)+fib(n-2);
    return sum;
}
 int main(){
    int n,result;
    printf("enter the nth term os the series= ");
    scanf("%d",&n);
    for (int i=0;i<=n;i++){
        printf("%d",fib(i)); 
        printf("\t");
   }

    
    result=fib(n);
    printf("\nthe nth term of the series is= %d",result);
 }