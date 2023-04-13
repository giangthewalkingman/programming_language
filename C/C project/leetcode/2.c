#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    fgets(s, sizeof(s)+1,stdin);
    int count1=0;
    for(int i = 0;i<strlen(s);i++){
        if(s[i]=='('&&s[i+1]!=')'){
            count1++;
            i+=1;
        }
        if(s[i]=='{'&&s[i+1]!='}'){
            count1++;
            i+=1;
        }
        if(s[i]=='['&&s[i+1]!=']'){
            count1++;
            i+=1;
        }
    }
    if(count1!=0){
        printf("false");
        printf("\n%d",count1);
    }else{printf("true");}
}