#include<iostream>
#include<string>
using namespace std;
#define MAX 100
char stack[MAX];
int top=-1;
void push(char);
char pop();
int isEmpty();
int isFull();
int check_balanced(char*);
int match_char(char,char);
int isFULL()
{
    if(top==MAX-1)
    {
        return 1;
    }
    else
       return 0;
}
void push(char c)
{
    if(isFULL())
    {
        cout<<"Stack overflow"<<endl;
        exit(1);
    }
    top=top+1;
    stack[top]=c;
}
int isEmpty()
{
    if(top==-1)
      return -1;
    else
      return 0;  
}
char pop()
{
    char c;
    if(isEmpty())
    {
        cout<<"Stack underflow"<<endl;
        exit(1);
    }
    c=stack[top];
    top=top-1;
    return c;
}
int main()
{
    char expr[MAX];
    int balanced;
    cout<<"Enter the algebraic sum: ";
    gets(expr);
    balanced=check_balanced(expr);
    if (balanced==1)
      cout<<"valid expression";
    else
      cout<<"Not a valid expression";
    return 0;    
}
int check_balanced(char*s)
{
    char temp;
    int i;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='['||s[i]=='{'||s[i]=='(')
          push(s[i]);
        if(s[i]==']'||s[i]=='}'||s[i]==')')
        {
            if (isEmpty())
            {
                cout<<"Right brackets are more"<<endl;
                return 0;
            }
            else
            {
                temp=pop();
                if(!match_char(temp,s[i]))
                {
                    cout<<"Mismatched brackets"<<endl;
                    return 0;
                }
            }
        }  
    }
    if(isEmpty())
    {
        cout<<"brackets are well balanced"<<endl;
        return 1;
    }
    else
    {
        cout<<"Left brackets are more"<<endl;
        return 0;
    }
}
int match_char(char a,char b)
{
    if(a=='['&&b==']')
      return 1;
    if(a=='{'&&b=='}')
      return 1;
    if(a=='('&&b==')')
      return 1;    
}
