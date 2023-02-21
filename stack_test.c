#include "stack.c"

int main()
{
    StackNode* head = Insert(NULL, 10, "Ark");
    if(head == NULL)
    {
        printf("Failed Test 1: Head is NULL after inserting first node");
        return 1;
    }
    if(head->id != 10 || strcmp(head->name, "Ark") != 0)
    {
        printf("Failed Test 1: First node inserted has the wrong value.");
        return 1;
    }
    printf("Passed Test 1: First node inputted is correct.\n");


    head = Insert(head, 15, "Canard");
    if(head == NULL)
    {
        printf("Failed Test 3: Head is NULL after inserting second node");
        return 1;
    }
    if(head->id == 10 && strcmp(head->name, "Ark") == 0)
    {
        printf("Failed Test 2: First didn't change after inserting second node.");
        return 1;
    }
    if(head->id != 15 || strcmp(head->name, "Canard") != 0)
    {
        printf("Failed Test 2: Wrong head value after inserting second node.");
        return 1;
    }
    printf("Passed Test 2: Head changed after inserting second node.\n");


    head = Insert(head, 11, "Joseph");
    if(head == NULL)
    {
        printf("Failed Test 3: Head is NULL after inserting third node");
        return 1;
    }
    if(head->id != 11 || strcmp(head->name, "Joseph") != 0)
    {
        printf("Failed Test 3: Wrong head value after inserting third node.");
        return 1;
    }
    printf("Passed Test 3: Head changed after inserting third node.\n");


    head = Pop(head);
    if(head->id != 15 || strcmp(head->name, "Canard") != 0)
    {
        if(head->id == 10 && strcmp(head->name, "Ark") == 0)
        {
            printf("Failed Test 4: Head did not change after pop.");
            return 1;
        }
        else
        {
            printf("Failed Test 4: Wrong head after pop.");
        }
        return 1;
    }
    printf("Passed Test 4: Correct head after pop.\n");
    
    head = Insert(head, 1, "Sigma");
    printf("Expected Output:\n1 Sigma\n15 Canard\n10 Ark\nYour Output:\n");
    PrintStack(head);

    printf("Passed Test 5? If the expected output and your output are the same.\n");
    
    head = Pop(head);
    head = Pop(head);
    head = Pop(head);
    head = Pop(head);
    head = Pop(head);
    head = Pop(head);
    head = Pop(head);
    head = Pop(head);

    if(head != NULL)
    {
        printf("Failed Test 6: Head is not NULL after popping as lot.");
        return 1;
    }
    printf("Passed Test 6: Head is NULL after popping a lot.");

    printf("You passed all test!\nYour code should be working, hopefully probably maybe.");
    return 0;

}