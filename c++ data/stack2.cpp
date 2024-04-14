#include<iostream>
#include<conio.h>
using namespace std;

int n;
class stack
{
private:
int s[10],top,ele,i; // char s[10] for character
public:
stack()
{
top=-1;
}
void push();
void dis();
void pop();
void peep();
void change();
};
void stack::push()
{
if(top==n-1){
    cout<<"\nStack is overflow:";

}else
{
    cout<<"Enter of element "<<endl;
    cin>>ele;
top++;
s[top]=ele;
top=ele;
top=[top+1];
}
}
void stack::dis()
{
if(top==-1)
{
cout<<"\n Stack is Empty";
}
else
{
cout<<"\nElements in stack are:\n";
for(i=top;i>=0;i--)
cout<<s[i]<<"\t";
}
}
void stack::pop()
{
if(top==-1)
{
cout<<"\nUnderflow";
}
else
{

cout<<"\nPop ele is "<<s[top];

top--;


}
}
int main()
{

stack s;
cout<<"Enter size of stack";
cin>>n;
int ch;
cout<<"\n1. Push 2.Display 3.Pop 4.Peep 5.Change 6.Exit\n";
while(ch!=6)
{
cout<<"\nEnter ch :";
cin>>ch;
switch(ch)
{
case 1: s.push(); break;
case 2: s.dis(); break;
case 3: s.pop();break;

}
}
getch();
return 0;
}