#include<stdio.h>
#include<string.h>

int main() 
{
    char str[100];
    printf("enter the name\t");
    gets(str);
    if(str[1]!='\0'){
        printf("%s",str);
    }


}
    