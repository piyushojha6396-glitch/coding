#include <stdio.h>

void swapByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("After swapping (call by value):\n");
    printf("a = %d, b = %d\n", x, y);
}

int main() {
    int a, b;
    printf("enter the value of a and b to swap\n");
    scanf("%d %d",&a,&b);
    swapByValue(a, b);


    return 0;
}
