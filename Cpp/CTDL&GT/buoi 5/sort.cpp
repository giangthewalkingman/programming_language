#include <iostream>
#include <chrono>
#include <ctime>
using namespace std;

// void quickSort(int *&a, int low, int high) {
//     int pivot;
//     /*Termination condition*/
//     if(high > low) {
//         pivot = 
//     }
// }

// int partition(int a[], int low, int high) {
//     int left, right;
//     int pivot_item;
//     pivot_item = a[low];
//     int pivot = left = low;
//     right = high;
//     while(left < right) {
//         /*Move left while item < pivot*/
//         while(a[left] < pivot_item) left++;
//         /*Move right while iteam > pivot*/
//         while(a[right] > pivot_item) righ--;
//         if(left < right) {
//             int temp = a[left];
//             a[left] = a[right];
//             a[right] = tmp;
//         }
//     }
// }

int main() {
    //static long int start, end;
    chrono::time_point<std::chrono::system_clock> start, end;
    start = chrono::system_clock::now();
    cout << "Hello World" << endl;
    end = chrono::system_clock::now();
    chrono::duration<double> elapsed_seconds = end - start;
    cout << "Execution time: " << elapsed_seconds.count();
}