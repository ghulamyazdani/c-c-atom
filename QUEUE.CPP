//QUEUE USING LINKED LIST TO PERFORM ADDITION, DELETION AND DISPLAY OPERATION.

#include<iostream.h>
#include<conio.h>
#include<process.h>
struct node
  {
    int data;
    node*next;
  };
  class queue
  {
     node *rear,*front;
  public:
     queue()
     {
	rear=NULL;
	front=NULL;
     }
     void qinsert();
     void qdelete();
     void qdisplay();
     ~queue();
     };
  void queue::qinsert()
    {
      node *temp;
      temp=new node;
      cout<<" Data: " ;
      cin>>temp->data;
      temp->next=NULL;
      if(rear==NULL)
    {
      rear=temp;
      front=temp;
    }
  else
    { rear->next=temp;
      rear=temp;
    }
  }
 void queue::qdelete()
 {
   if(front!=NULL)
    {
      node*temp=front;
      cout<<front->data<<endl<<"element deleted \n";
      front=front->next;
      delete temp;
      if(front==NULL)
	rear=NULL;
    }
 else
  cout<<endl<<"queue empty";
  }
 void queue::qdisplay()
 {
   node*temp=front;
   while(temp!=NULL)
    {  cout<<temp->data<<endl;
       temp=temp->next;
    }
 }
 queue::~queue()
 {
    while(front!=NULL)
    {
       node*temp=front;
       front=front->next;
       delete temp;
    }
 }
 int main()
 {
 clrscr();
 queue obj;char ch;
 do
   {
     cout<<"\n Main Menu";
     cout<<"\n A.Insert \t B.Delete \t C.Display \t D.Exit";
     cout<<endl<<"\n Enter Your Choice: ";
     cin>>ch;
     switch(ch)
       {
	 case 'A':
	 case 'a':
	       obj.qinsert();
	       break;
	 case 'B':
	 case 'b':
	       obj.qdelete();
	       break;
	 case 'C':
	 case 'c':
	       obj.qdisplay();
	       break;
	 case 'D':
	 case 'd':
	       exit(0);
	       getch();
       }
     }
     while(1);
   }