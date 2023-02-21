#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_STR_LEN 1024

// make a linked list that inserts through the tail
// and delete through the head
// this is a data structure known as "queue"
// you can search it up to learn more

// in this specific exercise, the queue holds a data that represent
// a name and id of a person

// (!) Warning: This is not an efficient way to implement a queue(!)
// This is just to practice making a linkedList, not to make an efficient queue


typedef struct QueueNodeStruct {
    int id;
    char name[MAX_STR_LEN];
    struct QueueNodeStruct* next;
} QueueNode;

QueueNode* NewQueueNode(int id, char name[MAX_STR_LEN])
{
    // This function should make a new QueueNode
    // that is ready to be inserted to a linkedList

    return NULL; //Change this after implementing the function
}

QueueNode* Insert(QueueNode* head, int id, char name[MAX_STR_LEN])
{
    // This function should insert a node that has
    // the value according to the function arguments
    // Also, return the head if it changes
    // The inputted head can be null to indicate an empty linkedList
    
    //The insertion should be done through the tail, since it's a queue

    return NULL; //Change this after implementing the function
}

QueueNode* Pop(QueueNode* head)
{
    // Pop the head and return the new head
    
    return NULL; //Change this after implementing the function
}

void PrintQueue(QueueNode* head)
{
    // Print id and name of every node one by one

}