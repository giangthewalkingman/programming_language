#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    int *a1, *b1;
    *a1 = (*a) + (*b);
    *b1 = ((*a) - (*b)); 
    *a = *a1, *b = *b1; 
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("Hello World");
    printf("%d\n%d", a, abs(b));
    return 0;
}