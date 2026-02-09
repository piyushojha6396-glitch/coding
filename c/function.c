#include<stdio.h>
#include<math.h>
int num_armstrone(int x)
{
    int sum=0;
    while(x>0){
        int rem=x%10;
        sum+=sum+(rem*rem*rem);
        x/=10;

    }
    if (sum==x) return 1;
    else return 0;
}
int main()
{
    int n;
    printf("enter the number to check armstrone..\n");
    scanf("%d",&n);
    if(num_armstrone(n)){
        printf("the given no. is armstrong\n");
    }
    else printf("not armstromg");
}