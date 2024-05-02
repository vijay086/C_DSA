#include <stdio.h> 
#include <stdlib.h> 
struct Node { 
int data; 
struct Node* next; 
}; 
void insertAtEnd(struct Node** head, int value) { 
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); 
    struct Node* temp = *head; 
    newNode->data = value; 
    newNode->next = NULL; 
 
    if (*head == NULL) { 
        *head = newNode; 
        return; 
    } 
 
    while (temp->next != NULL) { 
        temp = temp->next; 
    } 
 
    temp->next = newNode; 
} 
 
void deleteAtBeginning(struct Node** head) { 
    if (*head == NULL) { 
        printf("Linked list is already empty.\n"); 
        return; 
    } 
    struct Node* temp = *head; 
    *head = (*head)->next; 
    free(temp); 
} 
 
 
void displayLinkedList(struct Node* head) { 
    struct Node* temp = head; 
 
    if (temp == NULL) { 
        printf("Linked list is empty.\n"); 
        return; 
    } 
 
    while (temp != NULL) { 
        printf("%d -> ", temp->data); 
        temp = temp->next; 
    } 
 
    printf("NULL\n"); 
} 
 
void displayList(struct Node* head) { 
    struct Node* temp = head; 
    // Traverse and print the list 
    while (temp != NULL) { 
        printf("%d -> ", temp->data); 
        temp = temp->next; 
    } 
    printf("NULL\n"); 
} 
 
int main() { 
    struct Node* head = NULL; 
 
    // Insertion at the end 
    insertAtEnd(&head, 40); 
    insertAtEnd(&head, 50); 
    insertAtEnd(&head, 60); 
    insertAtEnd(&head, 70); 
printf("Linked list after insertion at the end: "); 
displayLinkedList(head); 
//Deletion from the beginning 
deleteAtBeginning(&head); 
deleteAtBeginning(&head); 
printf("Linked List after deletion at the beginning: "); 
displayList(head); 
return 0; 
} 
