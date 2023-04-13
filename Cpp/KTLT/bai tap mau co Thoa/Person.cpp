// Person.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Date {
    int day, month, year;
public:
    void nhapDate() {
        cin >> day >> month >> year;
    }
    void hienThiDate() {
        cout << day<< "-" << month << "-" << year;
    }
};

class Person {
    char ten[50];
    Date ntns;
    char que[100];

public:
    void nhapPerson() {
        cin.getline(ten, 50);
        ntns.nhapDate();
        cin.ignore();
        cin.getline(que, 100);
    }

    void hienThiPerson() {
        cout << "\n ten: " << ten;
        ntns.hienThiDate();
        cout << "\n que: " << que;

    }

};
int main()
{
    Person p1;
    p1.nhapPerson();
    p1.hienThiPerson();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
