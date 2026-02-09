#include <stdio.h>

 int factorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int n; // You can change this value
    printf("enter a number to calculate the factorial\n");
    scanf("%d",&n);
    int fact=factorial(n);  //function calling...
    printf("the factorial of the number is %d ",fact);

    return 0;
}
