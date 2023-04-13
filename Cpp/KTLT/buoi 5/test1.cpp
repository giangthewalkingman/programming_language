#include <stdio.h>
void drawHeart(int m, int n){
    int i,j,k=0;
    for(i = 1; i < 7; i++){
        for(j = 1;j <= 7; j++){
            if(!((i == 1 && (j == 1||j == 4||j == 7))
            ||(i == 4 && (j == 1 || j == 7))
            ||(i == 5 && (j <= 2 || j >= 6))
            ||(i == 6 && (j <= 3 || j >=5)))){
                printf(" Loveyou ");
                k++;
                if(k==13||k==19||k==24){
                    printf("\n");
                    if(k==19){
                        printf("      ");
                    }
                    if(k==24){
                        printf("\t     ");
                    }
                }
            }else{
                printf("      ");
                k++;
                if(k==7||k==28||k==36){
                    printf("\n");
                    if(k==28){
                        printf(" ");
                    }
                    if(k==36){
                        printf("          ");
                    }
                }
            }
            //printf("\n");
        }
    }
}

int main(){
    int m=6, n=7;
    drawHeart(m, n);
    return 0;
}    