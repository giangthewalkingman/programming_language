/* for example:
printf() is a function to print/output text to the screen
main() is a function to excute code
*/
/*to create(declare) your own function, specify the name of it, use () and {}*/
#include <stdio.h>
void myFunction(){
    printf("Hello everyone!");
}
//myFunction() is the name of the function
//"void" shows that this function doesn't have a return value(ex: main() has return 0)
/*when declaring a function, it is not excuted immediatedly, it will be excuted when being called by writing the function name
with 2 parentheses"()"and a semicolon ";"*/
int main(){
    myFunction();
    //and it can be executed multiple times:
    myFunction();
    myFunction();
    return 0;
}




