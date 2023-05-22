#include <iostream>
using namespace std;

class Stack {
    public:
    int cap;
    int top;
    //int A[cap];
    int *objPtr = new int(cap);
    Stack(int _cap) {cap = _cap; top = -1;} //top = -1 is that the stack is empty
    void push(int x);
    int pop();
    bool isEmpty();
    bool isFull();
    void printStack();
    ~Stack();
};

Stack::~Stack() {
    delete [] objPtr;
    cap = NULL;
    top = NULL;
}

bool Stack::isEmpty() {
    if(top == -1) {
        return true;
    }
    else {
        return false;
    }
}

bool Stack::isFull() {
    if(top == cap-1) {
        return true;
    }
    else {
        return false;
    }
}

void Stack::push(int x) {
    if(isFull()) {
        cout << "Stack is full, do nothing";
    }
    else {
        top++;
        objPtr[top] = x; 
    }
    return;
}

int Stack::pop() {
    if(!isEmpty()) {
        int objPopped = objPtr[top];
        objPtr[top] = NULL;
        top--;
        cout << objPopped << " has just been popped" << endl;
        return objPopped;
    }
    else {
        cout << "Stack is underflow" << endl;
        return -999;
    }
}

void Stack::printStack() {
    cout << "Printing the stack..." << endl;
    cout << "Object top is object[" << top <<"] = " << objPtr[top] << endl;
    for(int i = 0; i <=top; i++) {
        cout << "object["<<i<<"] = "<< objPtr[i] << endl;
    }
    cout << "Stack is printed" << endl;
}

int main() {
    Stack stack(10);
    for(int i = 0; i < 10; i++) {
        stack.push(i);
    }
    stack.printStack();
    cout << stack.isFull() << endl;
    for(int i = 0; i < 3; i++) {
        stack.pop();
    }
    stack.printStack();
}