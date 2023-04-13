#include <iostream>
using namespace std;

int main(){
    long int A[100], count=0;
    cout << "Input an array, we will find the max and min of its numbers:" <<endl;
    for(int i = 0; i < 100;i++){
        cout << "A["<<i<<"]= ";
        cin >> A[i];;
        if(A[i] == 0){
            //A[i] = NULL;
            break;
        }else{
            count +=1;
        }
    }
    long int max=A[0], min=A[0];
    for(int i = 0;i < count; i++ ){
        if(max<A[i]){
            max = A[i];
        }
        if(min>A[i]){
            min = A[i];
        }
    }
    cout <<"Max = "<< max <<endl<<"Min = "<< min;
    return 0;
}
//luu y ko dung mang! (nhung dung mang van dcc :v)