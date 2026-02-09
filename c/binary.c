#include <stdio.h>

int main() {
    int a[100], n, x, beg, end, mid, flag = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Please enter array elements in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter element: ");
        scanf("%d", &a[i]);
    }

    printf("Enter element to be searched: ");
    scanf("%d", &x);

    beg = 0;
    end = n - 1;

    while (beg <= end) {
        mid = (beg + end) / 2;

        if (a[mid] == x) {
            printf("Element found at position %d.\n", mid + 1);
            flag = 1;
            break;
        }

        if (a[mid] > x)
            end = mid - 1;
        else
            beg = mid + 1;
    }

    if (flag==0)
        printf("No such element is found.\n");

    return 0;
}
