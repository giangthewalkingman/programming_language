#include <stdio.h>
#include <string.h>
int main(){
    int i,n,tmp;
    char A[100][100];
    char B[100];
    do{
        //input the number of strings
        scanf("%d",&n);
    }while(n<=0||n>50);
    if(n==1){
        gets(B);
    }else
    gets(A[0]);
    for(i=0;i<n;i++){
        printf("A[%d] = ",i);
        gets(A[i]);
    }
    fflush(stdin);
    for(i=0;i<n;i++){
        for(int j=0;j<strlen(A[i]);j++){
            if((A[j][i]=='a'&&A[j+1][i]=='b')||(A[j+1][i]=='a'&&A[j][i]=='b')){
                A[j][i]='c';
                for(int k=j+1;k<strlen(A[i]);k++){
                    A[k][i]=A[k+1][i];
                    if(A[k][i]=='\0'){
                        break;
                    }
                }
                j+=1;
            }
            if((A[j][i]=='b'&&A[j+1][i]=='c')||(A[j+1][i]=='a'&&A[j][i]=='b')){
                A[j][i]='c';
                for(int k=j+1;k<strlen(A[i]);k++){
                    A[k][i]=A[k+1][i];
                    if(A[k][i]=='\0'){
                        break;
                    }
                }
                j+=1;
            }
            if((A[j][i]=='a'&&A[j+1][i]=='c')||(A[j+1][i]=='a'&&A[j][i]=='b')){
                A[j][i]='b';
                for(int k=j+1;k<strlen(A[i]);k++){
                    A[k][i]=A[k+1][i];
                    if(A[k][i]=='\0'){
                        break;
                    }
                }
                j+=1;
            }
        }
    }
    fflush(stdout);
    printf("the output strings are:\n");
    for(i=0;i<n;i++){
        //output strings:
        printf("A[%d] = %s\n",i,A[i]);
    }

}