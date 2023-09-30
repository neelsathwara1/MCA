#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Initialize an empty stack
struct Node* top = NULL;

void push() {

    int value;
    printf("Enter number to be pushed: ");
    scanf("%d",&value);
    
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed. Stack overflow!\n");
        return;
    }
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    printf("%d pushed onto the stack.\n", value);
}

int pop() {
    if (top == NULL) {
        printf("Stack is empty. Cannot pop.\n");
        return -1;
    }
    int poppedValue = top->data;
    struct Node* temp = top;
    top = top->next;
    free(temp);
    return poppedValue;
}

int isEmpty() {
    return top == NULL;
}

void printStack() {
    struct Node* current = top;
    printf("Stack: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {

    
    int ch;
    while (1)
    {
        printf("\nEnter 1 for push");
        printf("\nEnter 2 for pop");
        printf("\nEnter 3 for isEmpty");
        printf("\nEnter 4 for printStack");
        printf("\nEnter 0 for Exit");
        printf("\nYour Choice : \t");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            isEmpty();
            break;
        case 4:
            printStack();
            break;
        case 0:
            return 1;
        default:
            printf("Enter Valid input.");
            break;
        }
    }
    
}
