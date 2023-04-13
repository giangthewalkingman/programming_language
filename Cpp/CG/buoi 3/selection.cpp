#include <iostream>
using namespace std;

// int *p = NULL;

// void selectionSort(int A[], int low, int hi) {
//     for(int i = low; i < hi; i++) {
//         for(int j = i+1; j <= hi; j++) {
//             if(A[j]<A[i]) {
//                 int tmp = A[j];
//                 A[j] = A[i];
//                 A[i] = tmp;
//             }
//         }
//     }
//     p = A;
// }

// void sElectionSort(int A[], int low, int hi) {
//     for(int i = low; i < hi; i++) {
//         int minIdx = i;
//         for(int j = i+1; j <= hi; j++) {
//             if(A[j]<A[i]) {
//                 int tmp = A[j];
//                 A[j] = A[i];
//                 A[i] = tmp;
//             }
//         }
//     }
//     p = A;
// }

// void printArr(int low, int hi){
//     for(int i = low; i < hi; i++) {
//         cout << *(p+i) <<"\t";
//     }
// }

// int main() {
//     int X[] = {10, 4, 15, 3, 7, 20, 8};
//     selectionSort(X, 0, 6);
//     printArr(0, 6);
//     return 0;
// }


int binSearch(int A[], in low, int hi, int key) {
    if(low <= hi) {
        int mid = (low+hi/2)
        if(A[=mid == key]) {
            return (mid);
        }
        else if(key < A[mid]) {
            return(binSearch(A, low, mid-1, key));

        }
    }
    else {
        return -1;
    }
}

int main() {
    int X[] = {10, 4, 15, 3, 7, 20, 8};
    // selectionSort(X, 0, 6);
    // printArr(0, 6);
    return 0;
}
