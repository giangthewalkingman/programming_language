#include <stdio.h>
#include <string.h>
#include <conio.h>
typedef struct {
        char Name[25];
        int StudentID;
        float m, f;
        float t = 0.4*m + 0.6*f;
    } Student;

int main(){
    
    Student DS[10];
    for(int i=0;i<10;i++){
        printf("*Student[%d]: \n",i+1);
        printf("Name: ");
        scanf(" %[^\n]%*c",&DS[i].Name); //good
        printf("StudentID: ");
        scanf("%d",&DS[i].StudentID);
        printf("Midterm score: ");
        scanf("%f",&DS[i].m);
        printf("Final score: ");
        scanf("%f",&DS[i].f);
    }
    float max = DS[0].t;
    for(int i = 1; i < 10; i++){
        if(max < DS[i].t) {
            max = DS[i].t;
        }
    }
    printf("%f",max);
    float min = DS[0].t;
    for(int i = 1; i < 10; i++){
        if(min > DS[i].t) {
            min = DS[i].t;
        }
    }
    printf("%f",min);
    int id;
    int count=0;
    scanf("%d",&id);
    for(int i = 0; i < 10; i++){
        if(id==DS[i].StudentID){
            count++;
            printf("%d\n",DS[i].StudentID);
            printf("%s\n",DS[i].Name);
            printf("%f,%f,%f\n",DS[i].m,DS[i].t,DS[i].f);
        }
    }
    if(count==0){
        printf("No student with this ID");
    }
    int tmp;
    for(int i = 0; i < 9; i++) {
        for(int j = 1; j < 10; j++) {
            if(DS[i].t>DS[j].t){
                tmp = DS[i].t;
                DS[i].t=DS[j].t;
                DS[j].t=tmp;
            }
        }
    }
    for(int i = 0; i < 10 ; i++) {
        printf("%f\n",DS[i].t);
    }
    return 0;
}