//annother way to create a string
#include <stdio.h>
int main(){
    char randString[] = {'H','e','l','l','o',' ','W','o','r','l','d','\0',};
    //we use "\0" to tell C that it's the end of the string.
    printf("%s\n",randString);
    /*the sizes of randString in string.c and string3.c are not different, though they are different from their created ways
    in this way, we must include "\0" to tell C that it's the end of the string
    way 1 is easier than way 2 bcz  in way 1, the C does it
    */
    char randString2[] = "Hello World";
    printf("%lu\n%lu\n",sizeof(randString),sizeof(randString2));
    return 0;
}