#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node*next;
};
struct node*addtoempty(int data)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=temp;
    return temp;
}
struct node*addatend(struct node*tail,int data)
{
    struct node*newP=(struct node*)malloc(sizeof(struct node));
    newP->data=data;
    newP->next=NULL;
    newP->next=tail->next;
    tail->next=newP;
    tail=tail->next;
    return tail;
}
int searchelement(struct node*tail,int element)
{
    struct node*temp;
    int index=0;
    if(tail==NULL)
      return -2;

    temp=tail->next;
    do
    {
        if(temp->data==element)
          return index;

        temp=temp->next;
        index++;  
    }  while(temp!=tail->next);
    return -1;
}
int main()
{
    struct node*tail=NULL;
    int element;
    tail=addtoempty(45);
    tail=addatend(tail,34);
    tail=addatend(tail,54);
    tail=addatend(tail,35);
    cout<<"Enter the element: ";
    cin>>element;
    int index=searchelement(tail,element);
    if(index==-1)
      cout<<"Element not found";
    else if(index==-2)
      cout<<"Linked list empty";
    else
      cout<<"Element"<<" "<<element<<" "<<"is at index"<<" "<<index;    
}