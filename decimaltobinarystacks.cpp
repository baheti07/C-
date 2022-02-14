#include<iostream>
using namespace std;
#define MAX 100
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
void dec2bin(int n)
{
    while(n!=0)
    {
        push(n%2);
        n=n/2;
    }
}
void print()
{
    if(isEmpty())
    {
        cout<<"Stack underflow"<<endl;
        exit(1);
    }
    while(!isEmpty())
    {
        cout<<pop();
    }
}
int main()
{
    int dec;
    cout<<"Enter the decimal number: ";
    cin>>dec;
    dec2bin(dec);
    print();
    return 0;
}