//C function declaration & definition
#include <stdio.h>
/* a function consists of two parts: 
declaration(the function name, return type, and parameter(if any)) 
and 
definition(code to be executed)
code optimization: let's separate the declaration and definition of the function
such as:*/
void randFunction();
int main(){
    randFunction();
    return 0;
}
void randFunction(){
    printf("Hello World");
}

//can't run!!, why???bcz the file mustn't contain "&"
