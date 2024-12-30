#include <stdio.h>
#include "linkedlist.h"

int main() {
    Node* head = NULL;

    // Append nodes to the linked list
    appendNode(&head, 10);
    appendNode(&head, 20);
    appendNode(&head, 30);

    // Display the linked list
    printf("Linked List: ");
    displayList(head);

    return 0;
}
