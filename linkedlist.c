#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void insertAtBeginning(struct node** head,int value){
    struct node* new=(struct node*)malloc(sizeof(struct node));
    new->data=value;
    new->next=*head;
    *head=new;
}
void display(struct node* head){
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
   
}
int main(){
    struct node* head=NULL;
    insertAtBeginning(&head,20);
    insertAtBeginning(&head,30);
    insertAtBeginning(&head,40);
    insertAtBeginning(&head,50);
    insertAtBeginning(&head,60);
    display(head);
}