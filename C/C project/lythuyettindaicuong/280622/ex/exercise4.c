#include <stdio.h>
#include <string.h>
int main(){
    int i;
    char String[100];
    printf("Input your string: ");
    fgets(String,sizeof(String)+1,stdin);
    //gets(String); //ok
    //scanf("%s",String);  //not ok
    for(i=0;i<sizeof(String)+1;i++){
        if(String[i]==',' ||String[i]=='.'||String[i]==';'||String[i]==':'||String[i]=='?'||String[i]=='!'){
            String[i]=' ';
        }
    }
    printf("%s",String);
    return 0;
}