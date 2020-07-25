#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
struct node
{
  char name[20];
  int age;
  node *link;
}*front,*rear,*ptr,*newptr,*save;
node* create(char[],int);
void insert(node*);
void remove();
void display(node*);
void main()
{
  front=NULL;
  rear=NULL;
int a,res;
  int age;
  char ch,ans;
  clrscr();
char name[20];
  do
  {
     cout<<"1 - Insert\n2 - Delete\n3 - Display\n4 - Exit\n";
    cout<<"Enter your choice: ";
    cin>>a;
    switch (a)
    {
      case 1:  cout<<"\nEnter name: ";
	       gets(name);
	       cout<<"Enter age: ";
	       cin>>age;
	       ptr=create(name,age);
	       if(ptr==NULL)
	       {
		 cout<<"OBJECT COULD NOT BE CREATED DUE TO INSUFFICIENT MEMORY!!!";
		 break;
	       }
	       insert(ptr);
	       display(front);
	       break;
      case 2:  remove();
	       display(front);
	       break;
      case 3:  display(front);
	       break;
      case 4:  cout<<"\n\nAre you sure you want to exit?(y/n): ";
	       cin>>ans;
	       if(ans=='y'||ans=='Y')
	       exit(0);
      default: cout<<"\nERROR IN SELECTION!!!";
    }
    cout<<"\n\nDo you wish to continue?(y/n): ";
    cin>>ch;
  }while(ch=='y'||ch=='Y');
  getch();
}
node* create(char name[],int age)
{
  newptr=new node;
  strcpy(newptr->name,name);
  newptr->age=age;
  newptr->link=NULL;
  return newptr;
}
void insert(node* ptr)
{
  if(front==NULL)
  front=rear=ptr;
  else
  {
    rear->link=ptr;
    rear=ptr;
  }
}
void remove()
{
  if(front==NULL)
  cout<<"Underflow"<<endl;
  else if(front==rear)
  front=rear=NULL;
  else
  {
    save=front;
    front=front->link;
    delete save;
  }
 }
void display(node * temp)
{
  if(temp==NULL)
  {
    cout<<"\nQUEUE IS EMPTY";
    return;
  }
  cout<<"\nThe linked list: "<<endl;
  while(temp!=NULL)
  {
    cout<<temp->name<<" - "<<temp->age<<endl;
    temp=temp->link;
  }
}
