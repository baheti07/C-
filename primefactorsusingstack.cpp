#include<iostream>
using namespace std;
#define MAX 50
int stack[MAX];
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
void push(int n)
{
    if(isFULL())
    {
        cout<<"Stack overflow"<<endl;
        return;
    }
    top=top+1;
    stack[top]=n;
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
    int val;
    if(isEmpty())
    {
        cout<<"Stack underflow"<<endl;
        exit(1);
    }
    val=stack[top];
    top=top-1;
    return val;
}
void prime_fact(int num)
{
    int i=2;
    while(num!=1)
    {
        while(num%i==0)
        {
            push(i);
            num=num/i;
        }
        i++;
    }
    cout<<"Prime factors in descending orders are as follows: ";
    while(top!=-1)
      cout<<pop()<<" ";
}    
int main()
{
    int number;
    cout<<"Enter number: ";
    cin>>number;
    prime_fact(number);
    return 0;
}