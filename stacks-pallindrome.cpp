#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node*link;
}  *top=NULL;
int isEmpty()
{
    if(top==NULL)
      return 1;
    else
      return 0;  
}
void push(int data)
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
    newNode->link=top;
    top=newNode;
}      
int pop()
{
    struct node*temp;
    int val;
    if(isEmpty())
    {
        cout<<"Stack undeflow";
        exit(1);
    }
    temp=top;
    val=temp->data;
    top=top->link;
    free(temp);
    temp=NULL;
    return val;
}
void pallindrome_check(char*s)
{
    int i=0;
    while(s[i]!='X')
    {
        push(s[i]);
        i++;
    }
    i++;
    while(s[i])
    {
        if(isEmpty()||s[i]!=pop())
        {
            cout<<"Not pallindrome";
            exit(1);
        }
        i++;
    }
    if(isEmpty())
      cout<<"Pallindrome.";
    else
      cout<<"Not a Pallindrome.";
}
int main()
{
    char s[100];
    cout<<"Please enter the string: ";
    cin>>s;
    pallindrome_check(s);
    return 0;
}