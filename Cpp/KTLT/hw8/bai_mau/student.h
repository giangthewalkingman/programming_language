//Khai báo lớp Student trong file student.h
#include "person.h"
#include <string>
using namespace std;
class Student: public Person
{
string lop;
int id;
public:
Student(string, int, string, string,int);
void set_class(string c);
string get_class();
void set_id(int i);
int get_id();
void display();
};