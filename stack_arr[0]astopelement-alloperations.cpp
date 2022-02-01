#include<iostream>
using namespace std;
#define MAX 5
int stack_arr[MAX];
int first=-1;
int isFULL()
{
    if(first==MAX-1)
    {
        return 1;
    }
    else
       return 0;
}
void push(int data)
{
    int i;
    first+=1;
    if(isFULL())
    {
        cout<<"Stack overflow"<<endl;
        return;
    }
    for(i=first;i>0;i--)
      stack_arr[i]=stack_arr[i-1];

    stack_arr[0]=data;  
}
int isEmpty()
{
    if(first==-1)
      return -1;
    else
      return 0;  
}
int pop()
{
    int value,i;
    if(isEmpty())
    {
        cout<<"Stack underflow"<<endl;
        exit(1);
    }
    value=stack_arr[0];
    for(i=0;i<first;i++)
      stack_arr[i]=stack_arr[i+1];

    first-=1;
    return value;  
}
int peek()
{
    if(isEmpty())
    {
        cout<<"Stack underflow"<<endl;
        exit(1);
    }
    return stack_arr[0];
}
void print()
{
    int i;
    if(first==-1)
    {
        cout<<"Stack underflow"<<endl;
        return;
    }
    for(i=0;i<=first;i++)
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
                cout<<"Deleted element is "<<data;
                break;
            case 3:
                cout<<"The topmost element of stack is "<<peek();
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