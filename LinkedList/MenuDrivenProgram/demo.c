#include<stdio.h>
#include<stdlib.h>
void insertAtB(int x);
void insertAtE(int x);
void deleteAtB(int x);
void deleteAtE(int x);
void insertAtSP(int p, int x);
void deleteAtSP(int p, int x);
int countNode();
void showAll();

struct Node{
    int data;
    struct Node *next;
};
struct Node *start = NULL;
void main(){
insertAtB(10);
insertAtB(20);
insertAtB(30);
insertAtB(40);

int choice, x, p;
M:
printf("\n...MENU...\n");
printf("1. insert at Beginning\n");
printf("2. insert at Ending\n");
printf("3. delete at Beginning\n");
printf("4. delete at Ending\n");
printf("5. insert at specific position\n");
printf("6. delete at specific position\n");
scanf("%d ",&choice);

if(choice >=1 && choice <= 6){
    if(choice >= 1 && choice <= 4){
        printf("Enter value of x\n");
        scanf("%d",&x);
    }
    else{
        printf("Enter value of x and p\n");
        scanf("%d", &x);
        scanf("%d", &p);
        printf("\n\n");
    }

switch(choice)
{
    case 1:
    insertAtB(x);
    showAll();
    goto M;
    insertA

    case 2:tE(x);
    showAll();
    goto M;

    case 3:
    deleteAtB(x);
    showAll();
    goto M;

    case 4:
    deleteAtE(x);
    showAll();
    goto M;

    case 5:
    insertAtSP(p,x);
    showAll();
    goto M;
Nationals in snooker
    case 6:
    deleteAtSP(p, x);
    showAll();
    goto M;
}
    showAll();
}
else{
    printf("Invalid choice....\n");
}
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

void deleteAtB(int x){
    if(start == NULL){
    printf("list is empty");
    return;
    }
    struct Node *temp = start;
    start = start -> next;
    free(temp);
}

void deleteAtE(int x){
    if(start == NULL || start -> next == NULL){
    deleteAtB(x);
    return;
    }
    struct Node *temp = start;
    while(temp -> next -> next!=NULL){
    temp = temp -> next;
    }
    free(temp -> next);
    temp -> next = NULL;

}

void insertAtSP(int p, int x){
    if(p <= 1){
        insertAtB(x);
        return;
    }
    if(p > countNode()){
        insertAtE(x);
        return;
    }
    struct Node *temp = malloc(sizeof(struct Node));
    temp -> data = x;
    struct Node *temp2 = start;
    int i;
    for(i=1; i<p-1; i++){
        temp2 = temp2 -> next;
    }
    temp -> next = temp2 -> next;
    temp2 -> next = temp;
}

void deleteAtSP(int p, int x){
    if(p <= 1){
        deleteAtB(x);
        return;
    }
    if(p > countNode()){
        deleteAtE(x);
        return;
    }
    struct Node *temp = malloc(sizeof(struct Node));
    struct Node *temp2 = start;
    int i;
    for(i=1; i<p-1; i++){
        temp2 = temp2 -> next;
        temp2 -> next = temp -> next;
        free(temp);
    }
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
