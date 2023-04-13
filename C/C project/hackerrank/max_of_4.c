#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b,int c,int d){
    int max = a;
    if(a-b<0||a-c<0||a-d<0){
        max = b;
        if(b-c<0||b-d<0){
            max = c;
            if(c-d<0){
                max = d;
            }
        }
    }
    return max;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}