#include <stdio.h>
//C function parameter
/*information can be passed to a function as a parameter, parameters act as variables in a function
parameter is set inside the "()" after the function name. u can set as many parameters as u want:D*/
void myFunction(int age,char yourName[]){
    printf("I'm %d years old\nI'm %s\n",age,yourName);
}
int main(){
    myFunction(18,"Giang");
    myFunction(25,"Tu");
    myFunction(40,"David");
    return 0;
}
//note that the order of parameters can't be changed when using those functions, unless that, the code can't run,
//note that must work with as many parameters as u called them
