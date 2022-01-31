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
struct node*createList(struct node*head)
{
    int n,data,i;
    cout<<"Enter no of nodes: ";
    cin>>n;
    if(n==0)
      return head;
    cout<<"Enter element for node 1 : ";
    cin>>data;
    head=addToEmpty(head,data);

    for(i=1;i<n;i++)
    {
        cout<<"Enter element for node "<<i+1<<" : ";
        cin>>data;
        head=addatEnd(head,data);
    }  
    return head;
}  
int main()
{
    struct node*head=NULL;
    struct node*ptr;
    head=createList(head);
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    return 0;
}