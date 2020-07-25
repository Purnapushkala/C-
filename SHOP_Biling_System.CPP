#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
int i;
long total=0;
float discount,totalprice=0.0;
class person
{
public:
long no;
char name[30],address[50],email[40],phone[10];
void getdata()
{
cout<<"\nEnter Person Number\t";
cin>>no;
cout<<"\nEnter Name\t";
gets(name);
cout<<"Enter Address\t";
gets(address);
cout<<"Enter Email\t";
gets(email);
cout<<"Enter phone number\t";
gets(phone);
cout<<endl;
cout<<"_________________________________________________";
}
};
class item
{
public:
char itemname[50][50];
int ino;
long barcode[50],price[80];
void get(int)
{
cout<<"Enter Item Name";
cin>>itemname[i];
cout<<"Enter Barcode";
cin>>barcode[i];
cout<<"Enter Price";
cin>>price[i];
}
void put(int)
{
cout<<i<<"\t";
cout<<itemname[i]<<"\t";
cout<<barcode[i]<<"\t";
cout<<price[i]<<"\t";
}
};
class purchase
{
protected:
char ans;
char cardname[10];
void card()
{
cout<<"Do you have a credit card?(enter Y/N) ";
cin>>ans;
if (ans=='Y'||ans=='y')
{
cout<<"Enter credit card name ";
gets(cardname);
if(strcmpi(cardname,"najm")==0)
discount=0.10;
else if(strcmpi(cardname,"FGB")==0)
discount=0.08;
else if((strcmpi(cardname,"ADCB")==0)&&(total>100))
discount=0.05;
else
discount = 0.0;
}
}
};
class total:public person,public item, public purchase
{
public:
void amount();
}x;
void total::amount()
{
float vat = 0.05;
cout<<"Enter the number of items ";
cin>>ino;
for (i = 1;i<=ino;i++)
{
get(i);
total = total + price[i];
}
cout<<"_____________THE SUPERMARKET BILL______________";
cout<<"\nS.No\t"<<"NAME\t"<<"BARCODE\t"<<"PRICE\t"<<endl;
for(i=1;i<=ino;i++)
{
put(i);
cout<<endl;
}
card();
totalprice =  ((vat * total) + total)-(discount * total);
cout<<"Total is "<<total<<endl;
cout<<"Total cost (VAT and discount included) is "<<totalprice<<endl;
cout<<"_________________________________________________"<<endl;
cout<<"-----------------Cashier Details-----------------"<<endl;
}
void main()
{
clrscr();
x.amount();
x.getdata();
getche();
}
