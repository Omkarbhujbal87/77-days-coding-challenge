#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// Node structure
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function prototypes
Node* createNode(int data);
void appendNode(Node** head, int data);
void displayList(Node* head);

#endif
