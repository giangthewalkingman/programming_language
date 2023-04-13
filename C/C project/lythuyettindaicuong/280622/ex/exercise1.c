#include <stdio.h>
#include <string.h>
#include <conio.h>
typedef struct {
        char Name[100];
        char StudentID[10];
        struct {
            int date;
            int month;
            int year;
        } DOB;
        struct {
            float math,physic,chemistry,sum,medium;
            //float MPCsum=math+physic+chemistry;
        } Grade;
    } Student;

int main(){
    
    Student DS[10], SV;
    int n,i,j,d=0;
    do{
        printf("Number of Student: ");
        scanf("%d",&n);
    }while(n<2||n>10);
    for(i=0;i<n;i++){
        printf("*Student[%d]: \n",i+1);
        printf("Name: ");
        scanf(" %[^\n]%*c",&DS[i].Name); //good
        printf("StudentID: ");
        scanf("%s",&DS[i].StudentID);
        printf("Date of birth: \n");
        do{printf("Date: ");
        scanf("%d",&DS[i].DOB.date);}while(DS[i].DOB.date<=0||DS[i].DOB.date>=32);
        do{printf("Month: ");
        scanf("%d",&DS[i].DOB.month);}while(DS[i].DOB.month<=0||DS[i].DOB.month>12);
        do{printf("Year: ");
        scanf("%d",&DS[i].DOB.year);}while(DS[i].DOB.year<=0||DS[i].DOB.year>2022);
        printf("Grade of\n");
        do{printf("Math: ");
        scanf("%f",&DS[i].Grade.math);}while(DS[i].Grade.math<0||DS[i].Grade.math>10);
        do{printf("Physics: ");
        scanf("%f",&DS[i].Grade.physic);}while(DS[i].Grade.physic<0||DS[i].Grade.physic>10);
        do{printf("Chemistry: ");
        scanf("%f",&DS[i].Grade.chemistry);}while(DS[i].Grade.chemistry<0||DS[i].Grade.chemistry>10);
    }
    for(i=0;i<n;i++){
         DS[i].Grade.sum=DS[i].Grade.math+DS[i].Grade.physic+DS[i].Grade.chemistry;
    }
    printf("\nList of students having Sum of Grades >=23 :\n");
    for(i=0;i<n;i++){
        if(DS[i].Grade.sum>=23)
        printf("Student[%d]:\n Name: %s\t DOB: %d/%d/%d\n StudentID: %s\t Sum: %.2f\n ",
        i+1,DS[i].Name,DS[i].DOB.date,DS[i].DOB.month,DS[i].DOB.year,DS[i].StudentID,DS[i].Grade.sum);
    }
    printf("\nList of students having grades of each subject >3 :\n");
    for(i=0;i<n;i++){
        if(DS[i].Grade.chemistry>3&&DS[i].Grade.math>3&&DS[i].Grade.physic>3){
        printf("Student[%d]:\n Name: %s\t DOB: %d/%d/%d\n StudentID: %s\n",
        i+1,DS[i].Name,DS[i].DOB.date,DS[i].DOB.month,DS[i].DOB.year,DS[i].StudentID);
        }
    }
    return 0;
}