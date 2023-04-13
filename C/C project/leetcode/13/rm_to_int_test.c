

int romanToInt(char * s){
    int A[100]; int S=0;
    fflush(stdin);
    fgets(s,15,stdin);
    for(int i=0;i<strlen(s);i++){
        if(s[i] == 'I'){
            A[i] = 1;
        }
        if(s[i] == 'V'){
            A[i] = 5;
        }
        if(s[i] == 'X'){
            A[i] = 10;
        }
        if(s[i] == 'L'){
            A[i] = 50;
        }
        if(s[i] == 'C'){
            A[i] = 100;
        }
        if(s[i] == 'D'){
            A[i] = 500;
        }
        if(s[i] == 'M'){
            A[i] = 1000;
        }
    }
    for(int i=0;i<strlen(s);i++){
        if(A[i]!=1&&A[i]!=5&&A[i]!=10&&A[i]!=50&&A[i]!=100&&A[i]!=500&&A[i]!=1000){
            A[i]=0;
        }
    }
    for(int i=0;i<strlen(s);i++){
        if(A[i]<A[i+1]){
            S-=A[i];
        }
        else{
            S+=A[i];
        }
    }
    fflush(stdout);
    printf("%d",S);
}