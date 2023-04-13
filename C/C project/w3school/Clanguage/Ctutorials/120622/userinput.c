//let's begin with scanf function
#include <stdio.h>
int main(){
    int myNumber;
    printf("your number is ");
    scanf("%d",&myNumber);
    printf("Therefore, %d is your number\n",myNumber);
//u can also get a string entered by the user
//1. create a string and the size of it
    char myString[1000];
    printf("what do you want to write?\n- ");
//get and save the text
    scanf("%s",myString);
//output the text
    printf("the sentence is:\"%s\"",myString);

//bai mau:
// Create a string
char firstName[30];

// Ask the user to input some text
printf("Enter your first name: \n");

// Get and save the text
scanf("%s", firstName);

// Output the text
printf("Hello %s.", firstName);

    return 0;
}