#include <iostream>
using namespace std;
class Stack
{
 int stack[11],top;
 public:
 Stack()
 {
 top=-1;
 }
 void push(int num)
 {
 if(top==10)
 {
 cout<<"STACK OVERFLOW"<<endl;
 }
 else
 {
 top++;
 stack[top]=num;
 }
 }
 void pop()
 {
 int num;
 if(top==-1)
 {
 cout<<"STACK UNDERFLOW"<<endl;
 }
 else
 {
 num=stack[top];
 top--;
 cout<<"ELEMENT DELETED: "<<num<<endl;
 }
 }
 void DISPLAY()
 {
 if(top==-1)
 {
 cout<<"STACK IS EMPTY"<<endl;
 }
 else
 {
 cout<<"STACK ELEMENTS"<<endl;
 for(int i=top;i>=0;i--)
 {
 cout<<stack[i]<<endl;
 }
 }
 }
};
int main()
{
 Stack s;
 s.DISPLAY();
 int n;
 cin>>n;
 cout<<"ENTER STACK ELEMENTS :"<<endl;
 cout<<endl;
 for(int i=0;i<n;i++)
 {
 int x;
 cin>>x;
 s.push(x);
 }
 s.DISPLAY();
 s.pop();
 s.DISPLAY();
 return 0;
}
