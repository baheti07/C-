#include<iostream>
using namespace std;
struct node
{
    struct node*prev;
    int data;
    struct node*next;
};
struct node*addToEmpty(struct node*head,int data)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    head=temp;
    return head;
}
struct node*addatEnd(struct node*head,int data)
{
    struct node*temp,*tp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    tp=head;
    while(tp->next!=NULL)
       tp=tp->next;
    tp->next=temp;
    temp->prev=tp;
    return head;
}   
struct node*delfirst(struct node*head)
{
    struct node*temp=head;
    head=head->next;
    free(temp);
    temp=NULL;
    head->prev=NULL;
    return head;
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
int main()
{
    struct node*head=NULL;
    struct node*ptr;
    head=addToEmpty(head,45);
    head=addatEnd(head,34);
    head=addatEnd(head,69);
    ptr=head;
    cout<<"Before deletion: "<<endl;;
    print(head);

    head=delfirst(head);
    cout<<"After deletion: "<<endl;
    print(head);
    return 0;
}