#include<stdio.h>
int main()
{
    for(int i=1;i<=7;i++){
        if(i<=4)
        {
            for(int j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("\n");

        }
        else
        {
            for(int k=1;k<=8-i;k++)
            {
                printf("*");
            }
            printf("\n");
        }
        
    }
}