#include <stdio.h>
int main(){
    int yourWeight=72;
    /*now i will create a pointer (also called pointer variable) to store the memory address of "yourWeight" variable, note that this pointer has the same data type to that variable
   it is created with "*" */
    int* ptr = &yourWeight;
    //now, ptr stores yourWeight's memory address
    printf("%d\n", yourWeight);
    //outputs the memory address with the pointer
    printf("%p\n",ptr);
    //outputs the memory address 
    printf("%p\n",&yourWeight);
    //we can aslo get the value of the variable the pointer points by "*"
    printf("%d\n",*ptr);
    /*note that "*" may be confusing here
    when using in declaration(int* ptr): it creates the pointer
    when not using in declaration: it acts as a dereference operator
    dereference(v): obtain the memory address of a variable
    Why Should I Learn About Pointers? Pointers are important in C, because they give you the ability 
    to manipulate the data in the computer's memory - this can reduce the code and improve the performance.
Pointers are one of the things that make C stand out from other programming languages, like Python and Java.
Note: Pointers must be handled with care, since it is possible to damage data stored in other memory addresses.
Good To Know: There are three ways to declare pointer variables, but the first way is mostly used:
int* pointer
int * pointer
int *pointer
*/
    return 0;
}