#include <stdio.h>
#include <string.h>
int main(){
    int i,k;
    char String[100],String2[100],String3[100],String4[100];
    printf("Input your string: ");
    fgets(String,sizeof(String)+1,stdin);
    strcpy(String3,String);
    for(i=0;i<sizeof(String)+1;i++){
        if(String[i]=='1'){
            for(k=0;i<k<sizeof(String)+1;k++){
                String2[k+2]=String3[k];
            }
            String[i]='m';String[i+1]='o';String[i+2]='t';
        }
    }
    for(i=0;i<k;i++){
        printf("%s",String[i]);
    }
    for(k=0;i<k<sizeof(String)+1;k++){
        printf("%s",String2[k]);
    }
    return 0;
}
