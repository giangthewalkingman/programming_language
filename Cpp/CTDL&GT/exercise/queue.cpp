#include <iostream>
using namespace std;

class ArrayQueue {
    private:
    int front, rear;
    public:
    int cap;
    int *qArr;
    ArrayQueue(int n) {cap = n; front = 0; rear = 0; qArr = new int[cap];}
    void enQueue(int x);
    int deQueue();
    void printQueue();
    bool isFull();
    bool isEmpty();
};

void ArrayQueue::enQueue(int x) {
    if((rear+1)%cap == front) {
        qArr[rear] = x; //must add this line, unless the qArr[rear] value will not be added
    }
    else {
        qArr[rear] = x;
        rear = (rear+1)%cap;
    }
    return;
}

int ArrayQueue::deQueue() {
    int retObj;
    if(rear==front) {
        retObj = qArr[front];
        qArr[front] = NULL;
    }
    else {
        retObj = qArr[front];
        qArr[front] = NULL;
        front = (front+1)%cap;
    }
    return retObj;
}

void ArrayQueue::printQueue() {
    cout << "Printing the queue..." << endl;
    if(front==rear) {
        cout << "The front element = the rear element = " << qArr[front] << endl;
    }
    else{
        for(int i = front; i <= rear; i++) {
        cout << "Obj["<< i << "] =" << qArr[i] << endl;
    }
    }
    cout << "The queue is printed!" << endl;
}

bool ArrayQueue::isFull() {
    if((rear - front + 1) == cap) {
        cout << "The queue is full" << endl;
    }
    else {
        cout << "The queue is not full" << endl;
    }
}

bool ArrayQueue::isEmpty() {
    if(front==rear && qArr[front]==0) {
        cout << "The queue is empty" << endl;
    }
    else {
        cout << "The queue is not empty" << endl;
    }
}

int main() {
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    ArrayQueue q1(5);
    int returnValue;
    for(int i = 0; i < 5; i++) {
        q1.enQueue(A[i]);
    }
    q1.printQueue();
    q1.isFull();
    for(int i = 0; i < 5; i++) {
        returnValue =  q1.deQueue();
        cout << "return object is " << returnValue <<endl;
    }
    q1.printQueue();
    q1.isEmpty();
}