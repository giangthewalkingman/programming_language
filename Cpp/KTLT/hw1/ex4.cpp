#include <iostream>
using namespace std;

int main(){
    long int A[100], count=0,c1=0,c2=0,c3=0;
    cout << "Input an array:" <<endl;
    for(int i = 0; i < 100;i++){
        cout << "A["<<i<<"]= ";
        cin >> A[i];
        if(A[i] == 0){
            break;
        }else{count+=1;}
    }
    cout << "\n\n\nThose even numbers are: \n";
    for(int i = 0; i < count; i++){
        if(A[i]%2==0){
            c1+=1;
            cout << "A["<<i<<"] = "<<A[i]<<endl;
        }
    }
    cout << "=> There are " << c1 << " even numbers.\n";
    cout << "Those odd numbers are: \n";
    for(int i = 0; i < count; i++){
        if(A[i]%2==1){
            c2+=1;
            cout << "A["<<i<<"] = "<<A[i]<<endl;
        }
    }
    cout << "=> There are " << c2 << " odd numbers. \n";
    cout << "All those numbers divisible by 8: \n";
    for(int i = 0; i < count; i++){
        if(A[i]%8==0){
            c3+=1;
            cout << "A["<<i<<"] = "<<A[i]<<endl;
        }
    }
    cout << "=> There are "<< c3 <<" numbers divisible by 8\n";
    
}