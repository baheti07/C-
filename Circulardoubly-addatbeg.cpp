#include<iostream>
using namespace std;
struct node
{
    struct node*prev;
    int data;
    struct node*next;
};
struct node*addtoempty(int data)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=temp;
    temp->data=data;
    temp->next=temp;
    return temp;
}
struct node*addatbeg(struct node*tail,int data)
{
    struct node*newP=addtoempty(data);
    if(tail==NULL)
      return newP;

    else
    {
        struct node*temp=tail->next;
        newP->prev=tail;
        newP->next=temp;
        temp->prev=newP;
        tail->next=newP;
        return tail;
    }  
}
void print(struct node*tail)
{
    if(tail==NULL)
      cout<<"No element in list";

    else
    {
        struct node*temp=tail->next;
        do
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }  while(temp!=tail->next);
    }  
}
int main()
{
    struct node*tail=NULL;
    tail=addtoempty(45);
    tail=addatbeg(tail,34);
    print(tail);
    return 0;
}