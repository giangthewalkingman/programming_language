#include <stdio.h>
#include <math.h>
int daysOfweek();

int main(){
switch(daysOfweek()){
    case 1:
    printf("Monday");
    break;
    case 2:
    printf("Tuesday");
    break;
    case 3:
    printf("Wednesday");
    break;
    case 4:
    printf("Thursday");;
    break;
    case 5:
    printf("Friday");
    break;
    case 6:
    printf("Saturday");
    break;
    case 7:
    printf("Sunday");
    break;
    default:
    printf("Sunday");
    break;
    //note that: case 7 can't happen, i take case 7 output to "default"
}
printf("\nHave a good day bro!");
return 0;
}

int daysOfweek(){
    int x,y;
    printf("input year: ");
    scanf("%d",&x);
    printf("input which day of year: ");
    scanf("%d",&y);
    return ((x-1) + (x-1)/4 - (x-1)/100 + (x-1)/400 + y)%7;
}