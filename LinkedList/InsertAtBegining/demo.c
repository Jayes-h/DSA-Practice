#include<stdio.h>
#include<stdlib.h>

void insertAtB(int);
void showAll();

struct Node {
    int data;
    struct Node *next;
};

struct Node *start = NULL;

int main() {
    insertAtB(10);
    insertAtB(20);
    insertAtB(30);
    insertAtB(40);
    showAll();
    return 0;
}

void insertAtB(int x) {
    struct Node *temp1 = (struct Node*)malloc(sizeof(struct Node));
    if(temp1 == NULL) {
        printf("Space not available...\n");
        return;
    }
    temp1->data = x;
    temp1->next = start;
    start = temp1;
}

void showAll() {
    struct Node *temp = start;
    if(start == NULL) {
        printf("List is empty\n");
        return;
    }
    while(temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
