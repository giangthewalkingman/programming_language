#include <stdio.h>

struct Node {
    int data;
    struct Node *next;
};

//traverse
void traverse(struct Node *L) {
    while(L!=NILL) {
        printf("%d", L->data);
        L = L->next;
    }
}


int main() {
    struct Node *L;
    //duyet den phan tu cuoi thuoc L
    while(L!=NULL) {
        if(L->next == NULL) {
            break;
        }
        else {
            L = L->next;
        }
    }
}