#include<bits/stdc++.h>
using namespace std;

struct node
{
    
    int data;
    struct node*next;
};



void push(struct node** head, int data)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}
void print(struct node*head)
{
    struct node*ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}

node* intersectionPresent(node* head1,node* head2) {
     unordered_set<node*> st;
    while(head1 != NULL) {
       st.insert(head1);
       head1 = head1->next;
    }
    while(head2 != NULL) {
        if(st.find(head2) != st.end()) return head2;
        head2 = head2->next;
    }
    return NULL;

}
int main() {
    // creation of both lists 
    node* head = NULL;
    push(&head,4);
    push(&head,2);
    push(&head,1);
    push(&head,3);
    push(&head,1);
    node* head1 = head;
    head = head->next->next->next;
    node* headSec = NULL;
    push(&headSec,3);
    node* head2 = headSec;
    headSec->next = head;
    //printing of the lists
    cout<<"List1: "; print(head1);
    cout<<"List2: "; print(head2);
    //checking if intersection is present
    node* answerNode = intersectionPresent(head1,head2);
    if(answerNode == NULL )
    cout<<"No intersection\n";
    else
    cout<<"The intersection point is "<<answerNode->data<<endl;
    return 0;
}