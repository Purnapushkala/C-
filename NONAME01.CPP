#include<iostream.h>
#include<stdio.h>
#include<conio.h>
char s[100];
int q,l,r;


void main()
{
 clrscr();
 gets(s);
 int n = sizeof(s);
 for (int i=1;
 ofstream fout;
 fout.open("stu.dat",ios::binary|ios::app|ios::in );
 s.getdata();
 fout.write((char*)&s,sizeof(s));
 fout.close();
 ifstream fin;
 fin.open("stu.dat",ios::binary|ios::out);
 while(fin.read((char*)&s,sizeof(s)))
 {
 s.showdata();
 }

 fin.close();
 getche();
}
