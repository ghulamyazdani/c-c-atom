
//TO PERFORM BASIC OPERATION ON LINKED STACK

#include<iostream.h>
#include<conio.h>
#include<process.h>
struct node
{
int data;
node*next;
};
 class stack
{
  node*top;
public:
  stack()
  {
    top=NULL;
  }
  void push();
  void pop();
  void display();
  ~stack();
 };
 void stack::push()
 {
   node*temp;
   temp=new node;
   cout<<" Enter data: " ;
   cin>>temp->data;
   temp->next=top;
   top=temp;
 }
 void stack::pop()
 {
   if(top!=NULL)
     {
	node*temp=top;
	top=top->next;
	cout<<temp->data<<"element deleted" ;
	delete temp;
     }
   else
	cout<<endl<<"Stack is Empty";
 }
 void stack::display()
 {
    node*temp=top;
    while(temp!=NULL)
     {
	cout<<temp->data<<" ";
	temp=temp->next;
     }
 }
 stack::~stack()
 {
    while(top!=NULL)
    {
       node*temp=top;
       top=top->next;
       delete temp;
    }
 }
 int main()
 {
   clrscr();
   stack st;
   int ch;
   do
   {
   cout<<"\n Main Menu";
   cout<<"\n 1.Push Element \t2.Pop Element \n 3.Display Stack \t4.Exit";
   cout<<"\n Enter Your Choice: ";
   cin>>ch;
   switch(ch)
     {
	 case 1: st.push();
		 break;
	 case 2: st.pop();
		 break;
	 case 3: st.display();
		 break;
	 case 4: exit(0);
     }
     getch();
   }
   while(1);
   getch();
 }