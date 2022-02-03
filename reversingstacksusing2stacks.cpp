#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node*link;
};
int isEmpty(struct node**top)
{
    if(*top==NULL)
      return 1;
    else
      return 0;  
}
void push(int data,struct node** top1)
{
    struct node*newNode;
    newNode=(struct node*)malloc(sizeof(newNode));
    if(newNode==NULL)
    {
        cout<<"Stack overflow";
        exit(1);
    }
    newNode->data=data;
    newNode->link=NULL;
    newNode->link=*top1;
    *top1=newNode;
}
int pop(struct node** top)
{
    struct node*temp;
    int val;
    if(isEmpty(top))
    {
        cout<<"Stack undeflow";
        exit(1);
    }
    temp=*top;
    val=temp->data;
    *top=(*top)->link;
    free(temp);
    temp=NULL;
    return val;
}
void reverse_stack(struct node**top)
{
    struct node*top1=NULL;
    struct node*top2=NULL;
    while(*top!=NULL)
    {
        push(pop(top),&top1);
    }
    while(top1!=NULL)
    {
        push(pop(&top1),&top2);
    }
    while(top2!=NULL)
    {
        push(pop(&top2),top);
    }
}
void print(struct node**top)
{
    struct node*temp;
    temp=*top;
    if(isEmpty(top))
    {
        cout<<"Stack underflow"<<endl;
        exit(1);
    }
    cout<<"The stack elements are: ";
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<endl;
}
int main()
{
    int choice,data;
    struct node*top=NULL;
    while(1)
    {
        cout<<endl;
        cout<<"1.Push"<<endl;
        cout<<"2.Print"<<endl;
        cout<<"3.Reverse the elements of stack"<<endl;
        cout<<"4.Quit"<<endl;
        cout<<"Please enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter the element to be pushed: ";
                cin>>data;
                push(data,&top);
                break;
            case 2:
                print(&top);
                break;
            case 3:
                reverse_stack(&top);
                cout<<"The stack is reversed."<<endl;
                break;
            case 4:
                exit(1);
            default:
                cout<<"Wrong choice"<<endl;                    
        }
    }
    return 0;
}