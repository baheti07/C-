#include<iostream>
using namespace std;
#define MAX 4
int stack_arr[MAX];
int top=-1;
int isFULL()
{
    if(top==MAX-1)
    {
        return 1;
    }
    else
       return 0;
}
void push(int data)
{
    if(isFULL())
    {
        cout<<"Stack overflow"<<endl;
        return;
    }
    top=top+1;
    stack_arr[top]=data;
}
int isEmpty()
{
    if(top==-1)
      return -1;
    else
      return 0;  
}
int pop()
{
    int value;
    if(isEmpty())
    {
        cout<<"Stack underflow"<<endl;
        exit(1);
    }
    value=stack_arr[top];
    top=top-1;
    return value;
}
int peek()
{
    if(isEmpty())
    {
        cout<<"Stack underflow"<<endl;
        exit(1);
    }
    return stack_arr[top];
}
void print()
{
    int i;
    if(top==-1)
    {
        cout<<"Stack underflow";
        return;
    }
    for(i=top;i>=0;i--)
      cout<<stack_arr[i]<<" ";

    cout<<endl;  
}
int main()
{
    int choice,data;
    while(1)
    {
        cout<<endl;
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Print the top element"<<endl;
        cout<<"4.Print all the elements of stack"<<endl;
        cout<<"5.Quit"<<endl;
        cout<<"Please enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter the element to be pushed: ";
                cin>>data;
                push(data);
                break;
            case 2:
                data=pop();
                cout<<"Deleted element is"<<data;
                break;
            case 3:
                cout<<"The topmost element of stack is"<<endl<<peek();
                break;
            case 4:
                print();
                break;
            case 5:
                exit(1);
                break;
            default:
                cout<<"Wrong choice"<<endl;                    
        }
    }
    return 0;
}