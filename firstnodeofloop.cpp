#include <bits/stdc++.h>
using namespace std;
 
/* Link list node */
struct node {

    int data;
    struct node* next;
};
 
void push(struct node** head, int data)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}
 
struct node* detectLoop(struct node* head)
{
    // If list is empty or has only one node
    // without loop
    if (head == NULL || head->next == NULL)
        return NULL;
 
    node *slow = head, *fast = head;
    // Move slow and fast 1 and 2 steps
    // ahead respectively.
    slow = slow->next;
    fast = fast->next->next;
    // Search for loop using slow and
    // fast pointers
    while (fast && fast->next) {
        if (slow == fast)
            break;
        slow = slow->next;
        fast = fast->next->next;
    }
    // If loop does not exist
    if (slow != fast)
        return NULL;
    // If loop exists. Start slow from
    // head and fast from meeting point.
    slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}
 
 
/* Driver code*/
int main()
{
    /* Start with the empty head */
    struct node* head = NULL;
 
    push(&head, 15);
    push(&head, 20);
    push(&head, 50);
    push(&head, 4);
    push(&head, 10);
 
    /* Create a loop for testing */
    head->next->next->next->next = head->next->next; //10->4->50->20->15->50//
    struct node* res = detectLoop(head);
    if (res == NULL)
        cout << "Loop does not exist";
    else
        cout << "Loop starting node is " << res->data;
    
    return 0;
}