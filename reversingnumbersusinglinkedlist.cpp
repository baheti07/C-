#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node*link;
};
struct node*reversell(struct node*head)
{
    if(head==NULL)
      return head;

    struct node*current=NULL;
    struct node*next=head->link;
    head->link=NULL;
    while(next!=NULL)
    {
        current=next;
        next=next->link;
        current->link=head;
        head=current;
    } 
    return head;
}
struct node*addnode(struct node*head,int val)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->link=NULL;
    newnode->link=head;
    head=newnode;
    return head;
}
struct node*createll(struct node*head,int n)
{
    while(n!=0)
    {
        head=addnode(head,n%10);
        n=n/10;
    }
    return head;
}
void print(struct node*head)
{
    struct node*temp=head;
    if(head==NULL)
      cout<<"No number";

    else
    {
        while(temp->link!=NULL)
        {
            cout<<"->"<<temp->data;
            temp=temp->link;
        }
        cout<<"->"<<temp->data;
    }  
}
int main()
{
    int a,b;
    cout<<"Enter the two number: ";
    cin>>a>>b;
    cout<<"Linked list representation of first number"<<endl;
    struct node*head1=NULL;
    head1=createll(head1,a);
    print(head1);
    cout<<endl;
    struct node*head2=NULL;
    cout<<"Linked list representation of second number"<<endl;
    head2=createll(head2,b);
    print(head2);
    head1=reversell(head1);
    head2=reversell(head2);
    cout<<endl<<"Reversed linked list"<<endl;
    print(head1);
    cout<<endl;
    print(head2);
    return 0;
}