#include<stdio.h>
#include<string.h>
int main()
{
    FILE* ptr=fopen("example.txt","w");
    char str[]="we are having exam of pps";
    fputs(str,ptr);
    fclose(ptr);
    FILE* p=fopen("example.txt","r");
    char str1[100];
    while(fgets(str1,100,p)!=NULL){
        printf("%s",str1);
    }
    fclose(p);
}