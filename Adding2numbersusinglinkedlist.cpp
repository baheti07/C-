#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node*link;
};
struct node*push(struct node*head,int val)
{
    struct node*newP=(struct node*)malloc(sizeof(struct node));
    newP->data=val;
    newP->link=head;
    head=newP;
    return head;
}
struct node*add(struct node*head1,struct node*head2)
{
    if(head1->data==0)
      return head2;
    if(head2->data==0)
      return head1;
    struct node*ptr1=head1;
    struct node*ptr2=head2;
    struct node*head3=NULL;
    int carry=0,sum;
    while(ptr1||ptr2)
    {
        sum=0;
        if(ptr1)
          sum+=ptr1->data;
        if(ptr2)
          sum+=ptr2->data;
        sum+=carry;
        carry=sum/10;
        sum=sum%10;
        head3=push(head3,sum);
        if(ptr1)
          ptr1=ptr1->link;
        if(ptr2)
          ptr2=ptr2->link;      
    }
    if(carry)
      head3=push(head3,carry);
    return head3;  
        
}
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
void back2num(struct node*head)
{
    struct node*temp=head;
    cout<<endl<<"Result: ";
    while(temp)
    {
        cout<<temp->data;
        temp=temp->link;
    }
    return;
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
    struct node*head3=NULL;
    head3=add(head1,head2);
    cout<<endl<<"Resultant linked list after addition"<<endl;
    print(head3);
    back2num(head3);
    return 0;
}