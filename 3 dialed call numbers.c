#include <stdio.h>
#include <stdlib.h>

// Structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to display the linked list
void displayList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    int num1, num2, num3;

    // Get input from user
    printf("Enter 3 call numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Allocate nodes in heap memory
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // Assign data and link nodes
    head->data = num1;
    head->next = second;

    second->data = num2;
    second->next = third;

    third->data = num3;
    third->next = NULL;

    // Display the result
    displayList(head);

    // Free memory
    free(head);
    free(second);
    free(third);

    return 0;
}