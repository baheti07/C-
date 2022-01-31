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
struct node*addatbeg(struct node*tail,int data)
{
    struct node*newP=(struct node*)malloc(sizeof(struct node));
    newP->data=data;
    newP->next=tail->next;
    tail->next=newP;
    return tail;
}
void print(struct node*tail)
{
    struct node*p=tail->next;
    do
    {
        cout<<p->data<<" ";
        p=p->next;
    }  while(p!=tail->next);     
       
}
int main()
{
    struct node*tail;
    tail=addtoempty(45);
    tail=addatbeg(tail,34);
    print(tail);
    return 0;
}