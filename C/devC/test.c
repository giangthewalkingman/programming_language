#include <stdio.h>

int main() {
    //char con;
    int x;
     do {
        printf("start\n");
        printf("do you want to start again?\n");
        printf("Y/y for yes, N/n for no\n");
        //scanf("%c", &con);
        scanf("%d",&x);
        //printf("%c",con);
        // do {
        //     printf("confirm again\n");
        //     scanf("%c", &con);
        // }
        // if (con != 'Y' && con != 'y' && con != 'N' && con != 'n'){
        while(x!=1&&x!=0){ 
            printf("confirm again\n");
            //scanf("%c", &con);
            scanf("%d",&x);
        };
    } while (x!=0);
    // return 0;
}