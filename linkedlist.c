#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};

void insertatbegin(struct node** head,int value){
    struct node* newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=value;
    newNode->next=*head;
    *head=newNode;
}
void printlist(struct node* head){
    struct node* temp=head;
    printf("Linked list:\n");
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
void deleteAtbegin(struct node** head){
    if(*head==NULL){
        printf("List is empty");
    }
    struct node* temp=*head;
    *head=(*head)->next;
    free(temp);
}
int main(){
    struct node* head=NULL;
    insertatbegin(&head,30);
    insertatbegin(&head,40);
    insertatbegin(&head,50);
    insertatbegin(&head,60);
    printlist(head);
    deleteAtbegin(&head);
    printlist(head);
    return 0;
}