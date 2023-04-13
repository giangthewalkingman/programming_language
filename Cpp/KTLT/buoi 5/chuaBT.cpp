// mangSoChan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void laySoChan(int* mangDauVao, int n, int*& mangKetQua, int& demSoChan) {
    demSoChan = 0;
    for (int i = 0; i < n; i++)
        if (mangDauVao[i] % 2 == 0)
            demSoChan++;
    mangKetQua = new int[demSoChan];
    int j = 0;
    for (int i = 0; i < n; i++)
        if (mangDauVao[i] % 2 == 0)
        {
            mangKetQua[j] = mangDauVao[i];
            j++;
        }
    }

int main()
{
    //mang dau vao la mang tinh
    int a[5] = { 2, 6, 4, 7, 9 };
    int* ketQua;
    int soLuongChan;
    laySoChan(a, 5, ketQua, soLuongChan);
    for (int i = 0; i < soLuongChan; i++)
        cout << ketQua[i] << "\t";

    //mang dau vao la mang dong
    int n;
    int* ketQua1;
    int soLuongChan1;
    cout << "\nHay nhap so phan tu cua mang: ";
    cin >> n;
    int* b = new int[n];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    laySoChan(b, n, ketQua1, soLuongChan1);
    
    for (int i = 0; i < soLuongChan1; i++)
        cout << ketQua1[i] << "\t";
}
