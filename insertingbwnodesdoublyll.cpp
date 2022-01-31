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
struct node*addatBeg(struct node*head,int data)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    temp->next=head;
    temp->prev=temp;
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
struct node*addafterpos(struct node*head,int data,int position)
{
    struct node*newP=NULL;
    struct node*temp=head;
    struct node*temp2=NULL;
    newP=addToEmpty(newP,data);

    while(position!=1)
    {
        temp=temp->next;
        position--;

    }
    if(temp->next==NULL)
    {
        temp->next=newP;
        newP->prev=temp;
    }
    else
    {
        temp2=temp->next;
        temp->next=newP;
        temp->prev=newP;
        newP->next=temp2;
        newP->prev=temp;
    }
    return head;
}    
int main()
{
    struct node*head=NULL;
    struct node*ptr;
    int position=3;
    head=addToEmpty(head,45);
    head=addatBeg(head,34);
    head=addatEnd(head,69);
    head=addafterpos(head,25,position);
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    return 0;
}