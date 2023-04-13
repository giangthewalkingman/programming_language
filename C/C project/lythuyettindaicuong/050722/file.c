#include <stdio.h>
int main(){
    FILE *f1;
    f1 = fopen("file_01.txt","rt");
    int i,n;
    for(i=0;i<100;i++){
        n=2*i+1;
        fwrite(&n,sizeof(int),1,f1);
    }
    fclose(f1);
    return 0;
}












