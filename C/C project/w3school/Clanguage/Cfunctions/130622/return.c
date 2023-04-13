/*the "void" keyword means that its function should not have a return value
if u want to return to a value, use a data type(such as int, float, etc.)*/
#include <stdio.h>
int myFunction(int x){
    return 10+x;
}
int main(){
    printf("I have %d ex",myFunction(10));
    return 0;
}
//outputs 20(10+10)