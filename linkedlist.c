#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to display the linked list
void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    // Creating nodes with values 17, 16, 15, 14
    struct Node* head = createNode(17);
    head->next = createNode(16);
    head->next->next = createNode(15);
    head->next->next->next = createNode(14);

    // Display linked list
    printf("Linked List: ");
    display(head);

    return 0;
}

