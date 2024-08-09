#include<stdio.h>
#include<stdlib.h>

void insertAtB(int);
void insertAtE(int);
int countNode();
void showAll();

struct Node {
    int data;
    struct Node *next;
};

struct Node *start = NULL;

int main() {
    insertAtE(10);
    insertAtE(20);
    insertAtE(30);
    insertAtE(40);
    showAll();
    countNode();

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

void insertAtE(int x) {
    if(start == NULL){
    insertAtB(x);
    return;
    }
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = x;
    newNode -> next = NULL;
    struct Node *temp2 = start;
    while(temp2 -> next != NULL){
    temp2 = temp2 -> next;
    }
    temp2 -> next = newNode;
}

int countNode(){
    struct Node *temp = start;
    int c=0;
    while(temp != NULL){
        temp = temp -> next;
        c++;
    }
    printf("%d\n",c);
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
