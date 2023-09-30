#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void InsertAtbeginning() {

    int value;
    printf("Enter number to be inserted: ");
    scanf("%d",&value);
    
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next=NULL;
    
    if (head == NULL) {
        head=newNode;
        printf("%d value inserted.\n", value);
    }
    else{
        newNode->next=head;
        head=newNode;
    }
    

}

void InsertAtEnd()
{
    int value;
    printf("Enter number to be inserted: ");
    scanf("%d",&value);
    
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode -> next = NULL ;

    if (head == NULL) {
        newNode=head;
        newNode->next=NULL;
        printf("%d value inserted.\n", value);
    }
    else
    {
        struct Node* current = head;
        while (current->next!=NULL)
        {
            current=current->next;
        }
        current->next=newNode;
    }
   
}
void InsertAfter()
{
    int value,after;

    printf("\n Enter the data to be inserted :");
    scanf("%d",&value);

    printf("\n Enter the data after which you want to insert :");
    scanf("%d",&after);

    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;


    if(head == NULL)
    {
        printf("Linked list is empty...");
    }
    else
    {
        struct Node* current = head;
        while(current->data != after)
        {
            current = current->next;
        }
        if(current->data == after)
        {
            newNode->next = current->next;
            current->next = newNode;
            printf("\n%d inserted after %d",newNode->data,after);
        }
        if(current->next == NULL)
        {
            printf("\n%d value not found in linked list.",after);
            free(newNode);
        }
    }

    
}

void InsertBefore()
{
    int value,before;

    printf("\nEnter the value to be inserted : ");
    scanf("%d",&value);

    printf("\nEnter the element before which new node has to be added : ");
    scanf("%d",&before);

    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL)
    {
        printf("Linked list is empty.");
    }
    else{
        struct Node* current = head;
        while(current->next->data != before)
        {
            current = current->next;
        }
        if(current->next-> next==NULL){
            printf("\n%d value not found in linked list.",before);
            free(newNode);
        }
        if(current->next->data == before)
        {
            newNode->next = current->next;
            current->next = newNode;
            printf("\n%d inserted before %d.",newNode->data,before);
        }
    }
}

void deleteElement()
{
    int value;
    printf("\nEnter the data of the element you want to remove : ");
    scanf("%d",&value);

    struct Node* current = head;

    while(current->next->data != value)
    {
        current = current->next;
    }
    current->next = current->next->next;
    printf("\n%d Deleted",value);
    free(current->next);
}

void Print()
{
    if (head==NULL)
    {
        printf("List is empty.");
    }
    struct Node* current = head;
    while (current!=NULL)
    {
        printf("%d -> ",current->data);
        current=current->next;
    }
}
int main() {

    
    int ch;
    while (1)
    {
        printf("\n\n\n");
        printf("\nEnter 1 for insertion at beginning");
        printf("\nEnter 2 for insert at end");
        printf("\nEnter 3 for Print");
        printf("\nEnter 4 for Insert Before value");
        printf("\nEnter 5 for Insert After value");
        printf("\nEnter 6 to delete the value");
        printf("\nEnter 0 for Exit");
        printf("\nYour Choice : \t");
        scanf("%d",&ch);
        printf("\n\n\n");
        switch (ch)
        {
        case 1:
            InsertAtbeginning();
            break;
        case 2:
            InsertAtEnd();
            break;
        case 3:
           Print();
            break;
        case 4:
            InsertBefore();
            break;
        case 5:
            InsertAfter();
            break;
        case 6:
            deleteElement();
            break;
        case 0:
            return 1;
        default:
            printf("Enter Valid input.");
            break;
        }
    }
    
}
