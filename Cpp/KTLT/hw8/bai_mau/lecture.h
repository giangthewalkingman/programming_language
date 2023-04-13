// Khai báo lớp Lecture trong file lecture.h Thực hiện (Lớp Lecture)
#include "person.h"
#include <string>
using namespace std;
class Lecture:public Person{
string faculty;
int telnumber;
public:
Lecture(string,int, string, string,int); 
void set_faculty(string f);
string get_faculty();
void set_telnumber(int tel);
int get_telnumber(); 
void display();
};