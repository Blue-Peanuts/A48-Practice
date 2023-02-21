#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_STR_LEN 1024

// make a linked list that inserts through the head
// and delete through the head
// this is a data structure known as "stack"
// you can search it up to learn more

// in this specific exercise, the stack holds a data that represent
// a name and id of a person


typedef struct StackNodeStruct {
    int id;
    char name[MAX_STR_LEN];
    struct StackNodeStruct* next;
} StackNode;

StackNode* NewStackNode(int id, char name[MAX_STR_LEN])
{
    // This function should make a new StackNode
    // that is ready to be inserted to a linkedList

    StackNode* newNode = malloc(sizeof(StackNode));
    newNode -> id = id;
    strcpy(newNode -> name, name);
    newNode -> next = NULL;

    return newNode;
}

StackNode* Insert(StackNode* head, int id, char name[MAX_STR_LEN])
{
    // This function should insert a node that has
    // the value according to the function arguments
    // Also, return the head if it changes
    // The inputted head can be null to indicate an empty linkedList
    
    //The insertion should be done through the head, since it's a stack

    StackNode* newNode = NewStackNode(id, name);

    if(head != NULL)
        newNode -> next = head;
    return newNode;
    

}

StackNode* Pop(StackNode* head)
{
    // Pop the head and return the new head
    
    if(head == NULL)
        return NULL;

    StackNode* newHead = head -> next;
    free(head);
    return newHead;
}

void PrintStack(StackNode* head)
{
    // Print id and name of every node one by one

    while(head != NULL)
    {
        printf("%d %s\n", head->id, head->name);
        head = head -> next;
    }
}