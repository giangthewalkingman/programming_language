#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
    char s[50];
    cin.getline(s,50);
    cout <<s<<endl;
    char s1[50];
    strcpy(s1,s);
    cout <<s1<<endl;

}