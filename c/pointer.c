#include <stdio.h>
void update(int *a,int *b) {
    int tem=*a;
    
    (*a)=(*a)+(*b); 
    if(tem>(*b)){
     (*b)=tem-(*b);   
    }
    else {
        (*b)=(*b)-tem;
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}