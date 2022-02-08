#include<iostream>
#include<string.h>
using namespace std;
#define MAX 100
char stack[MAX];
char infix[MAX];
char postfix[MAX];
int top=-1;
void push(char);
char pop();
int isEmpty();
void inToPost();
int space(char);
void print();
int precedence(char);
int main()
{
    cout<<"Enter the infix expression: ";
    gets(infix);
    inToPost();
    print();
    return 0;
}
void push(char c)
{
    if(top==MAX-1)
    {
        cout<<"Stack overflow"<<endl;
        exit(1);
    }
    top=top+1;
    stack[top]=c;
}
char pop()
{
    char c;
    if(top==-1)
    {
        cout<<"Stack underflow"<<endl;
        exit(1);
    }
    c=stack[top];
    top=top-1;
    return c;
}
int isEmpty()
{
    if(top==-1)
      return -1;
    else
      return 0;  
}
void inToPost()
{
    int i,j=0;
    char next,symbol;
    for(i=0;i<strlen(infix);i++)
    {
        symbol=infix[i];
        if(!space(symbol))
        {
            switch(symbol)
            {
                case '(':
                   push(symbol);
                   break;
                case ')':
                   while((next=pop())!='(')
                      postfix[j++]=next;
                   break; 
                case '+':
                case '-':
                case '*':
                case '/':
                case '^':
                    while(!isEmpty() && precedence(stack[top])>=precedence(symbol))  
                       postfix[j++]=pop();
                    push(symbol);
                    break;
                default:
                    postfix[j++]=symbol;             
            }
        }
    }
    while(!isEmpty())
      postfix[j++]=pop();
    postfix[j]='\0';  
}
int space(char c)
{
    if(c==' ' || c=='\t')
      return 1;
    else
      return 0;  
}
int precedence(char symbol)
{
    switch(symbol)
    {
        case '^':
            return 3;
        case '/':
        case '*':
            return 2;
        case '+':
        case '-':
            return 1;   
        default:
            return 0;           
    }
}
void print()
{
    int i=0;
    cout<<"The equivalent postfix expression is: ";
    while(postfix[i])
    {
        cout<<postfix[i++];
    }
    cout<<endl;
}