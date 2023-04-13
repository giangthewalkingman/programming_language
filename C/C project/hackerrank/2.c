#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch, s[100], sen[100];
    fflush(stdin);
    scanf("%c",&ch);
    scanf("\n");
    gets(s);
    scanf("\n");
    gets(sen);
    fflush(stdout);
    printf("%c\n%s\n%s",ch,s,sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}