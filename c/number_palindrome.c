#include<stdio.h>    //to check wheather number is pallindrome or not...
int main()
{
    int n;
    printf("enter the number\t");
    scanf("%d",&n);
    int check=n;
    int rev=0;
    while(n>0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(check==rev) printf("palindrome\n");
    else printf("not palindrome\n");
}