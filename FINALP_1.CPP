#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<process.h>
#include<fstream.h>
#include<iomanip.h>
#include<string.h>
void modify_student();
class student
{
 long rno;
 int phy,chem,math,eng,csc;
 char name[50];
 float percent;
 char grade;
 int std;
 void calculate()
{
  percent=(phy+chem+math+eng+csc)/5.0;
  if(percent>90&&percent<=100)
  grade='A';
  else if(percent>80&& percent<=90)
  grade='B';
  else if(percent>70&& percent<=80)
  grade='C';
  else if(percent>60&& percent<=70)
  grade='D';
  else if(percent>40&& percent<=60)
  grade='E';
  else
 grade='F';
}
 public:
	int check();
	void getdata()
	{

	check();
	 cout<<"\nEnter The Name of student ";
	 gets(name);

	 cout<<"\nEnter The marks in physics(out of 100): ";
	 cin>>phy;

	 cout<<"\nEnter The marks in chemistry(out of 100): ";
	 cin>>chem;

	 cout<<"\nEnter The marks in maths(out of 100): ";
	 cin>>math;

	 cout<<"\nEnter The marks in english(out of 100): ";
	 cin>>eng;

	 cout<<"\nEnter The marks in computer science(out of 100): ";
	 cin>>csc;


	calculate();
	 }

	void showdata()
	{
	 cout<<"\nRoll number of student : "<<rno;
	 cout<<"\nName of student : "<<name;
	 cout<<"\nMarks in Physics : "<<phy;
	 cout<<"\nMarks in Chemistry : "<<chem;
	 cout<<"\nMarks in Maths : "<<math;
	 cout<<"\nMarks in English : "<<eng;
	 cout<<"\nMarks in Computer Science :"<<csc;
	 cout<<"\nPercentage of student is:"<<setprecision(2)<<percent;
	 cout<<"\nGrade of student is:"<<grade;
	 }

	 void table()
	 {

	 cout<<rno<<setw(10)<<name<<setw(12)<<phy<<setw(3)<<chem<<setw(3)<<math<<setw(3)<<eng<<setw(4)<<csc<<setw(6)<<setprecision(3)<<percent<<"   "<<grade<<endl;
	 }

  int  retrno()
  {
  return rno;
  }

};
int student::check()
{

do
{
cout<<"Enter the roll number"<<endl;
cin >>rno;

if (cin.fail())
{
cin.clear();
cin.ignore();
cout<<"Enter the roll number"<<endl;
cin >>rno;
}
if(!cin.fail())
break;
}while(1);
return rno;
}

 fstream file;
 student stu;
void write_student()
   {
    file.open("studentfile.dat",ios::out|ios::app);
    stu.getdata();
    file.write((char*)&stu,sizeof(student));
    file.close();
    cout<<"\n Student Record Created ";
    getch();
   }

void display_all()
{
    clrscr();
    cout<<"\nDisplaying the records\n";
    file.open("studentfile.dat",ios::in);
    while(file.read((char*)&stu,sizeof(student)))
	{
	 stu.showdata();
	 }
    file.close();
    getch();
}
void display_sp(int num)
{
    int count=0;
    file.open("studentfile.dat",ios::in);
    while(file.read((char*)&stu,sizeof(student)))
	{
	 if(stu.retrno()==num)
		{
		 clrscr();
		 stu.showdata();
		 count=1;
		}
	}
    file.close();
if(count==0)
 cout<<"\n Record does not exist";
    getch();
}
void modify_student()
{
    int num,find =0;
    clrscr();
    cout<<"\n To Modify ";
    cout<<"\n Enter the roll number of student";
    cin>>num;
    file.open("studentfile.dat",ios::in|ios::out);
    while(file.read((char*)&stu,sizeof(student)) && find==0)
	   {
	    if(stu.retrno()==num)
		   {
		    int opt;
		    stu.showdata();
		    cout<<"\nRecord modification'\n";
		    cout<<"\nPlease Enter The New Details of student"<<endl;
		    stu.getdata();
		    int pos=-1*sizeof(stu);
		    file.seekp(pos,ios::cur);
		    file.write((char*)&stu,sizeof(student));
		    cout<<"\n Record Updated";
		    find=1;


	     }
	     }
    file.close();
    if(find==0)
    cout<<"\n Record Not Found ";
    getch();
}

void delete_student()
   {
    int no;
    clrscr();
    cout<<"\n Delete Record";
    cout<<"\n Enter the roll number of student you wish to delete";
    cin>>no;
    ifstream file;
    file.open("studentfile.dat",ios::in|ios::out);
    ofstream file2;
    file2.open("Temp.dat",ios::out);
    file.seekg(0,ios::beg);
    while(file.read((char*)&stu,sizeof(student)))
	{
	 if(stu.retrno()!=no)
		{
		 file2.write((char*)&stu,sizeof(student));
		 }
	 }
    file2.close();
    file.close();
    remove("studentfile.dat");
    rename("Temp.dat","studentfile.dat");
    cout<<"\n Record Deleted ";
    getch();
    }

    void class_result()
    {
     clrscr();
     file.open("studentfile.dat",ios::in);
     if(!file)
     {
       cout<<"ERROR! File cannot be opened \n Go To Entry Menu to create File";
       cout<<"\n Program is closing ....";
	getch();
       exit(0);
     }

     cout<<"\n ALL STUDENTS RESULT \n";
	  cout<<"====================================================\n";
	  cout<<"Roll No. Name          P  C  M  E  CS   %   Grade\n";
	  cout<<"====================================================\n";

      while(file.read((char*)&stu,sizeof(student)))
	 {
	   stu.table();
	}
     file.close();
     getch();
   }
   void result()
   {
    int ans,rno;
    char ch;
    clrscr();
    cout<<"\n RESULT MENU";
    cout<<"\n1.Class Result \n2.Student Report Card \n3.Main Menu";
    cout<<"\nEnter Choice(1,2,3) ? ";
    cin>>ans;
    switch(ans)
    {
     case 1 : class_result();
		break;
     case 2 : {
		do{
		clrscr();

		cout<<"\n\nEnter Roll Number Of Student : ";
		cin>>rno;
		display_sp(rno);
		cout<<"\nDo you want to See More Result (y/n)?";
		cin>>ch;
		}while(ch=='y'||ch=='Y');

		break;
	       }
     case 3: break;
     default:  cout<<"\a";
    }
 }

void entry_menu()
{
  clrscr();
  int ch;
  cout<<"\n MENU";
  cout<<"\n 1.CREATE STUDENT RECORD";
  cout<<"\n 2.DISPLAY ALL STUDENTS RECORDS";
  cout<<"\n 3.SEARCH STUDENT RECORD ";
  cout<<"\n 4.MODIFY STUDENT RECORD";
  cout<<"\n 5.DELETE STUDENT RECORD";
  cout<<"\n 6.BACK TO MAIN MENU";
  cout<<"\n Enter Your Choice (1-6) ";
  cin>>ch;
  switch(ch)
  {
    case 1 : {clrscr();
	      write_student();
	      break;}
    case  2 :{ display_all();
	      break;}
    case 3 :
	       {int num;
	       clrscr();
	       cout<<"\n Please Enter The roll number ";
	       cin>>num;
	       display_sp(num);
	       break;}
      case 4 : {modify_student();
		break;}
      case 5 : {delete_student();
		break;}
      case  6 : break;
      default: entry_menu();
   }
}

void main()
{
clrscr();
  char charec;
  printf("********************************************************************************");
cout<<(" \n COMPUTER SCIENCE PROJECT WORK \n");
printf(" \n");

textcolor(WHITE);
cputs (" WELCOME TO THE DELHI PRIVATE SCHOOL, DUBAI \n");
 textcolor(BROWN);
cout<<("\n SUBJECT TEACHER:-MRS. RICHI REHLAN \n");
 cout<<"\n";
 printf("********************************************************************************\n");
 textcolor(LIGHTGRAY);
cout<<(" BY:- PURNAPUSHKALA HARIHARAN \n");
cout<<(" CLASS:- XII A \n");
cout<<(" YEAR:- 2018-2019 \n");
printf("********************************************************************************\n");
 cout<<"\n\n";
textcolor(LIGHTCYAN);
cout<<("PRESS ENTER TO CONTINUE!!!!!!");
getch();
clrscr();
  textcolor(WHITE);
  do
    {
	  clrscr();
	  cout<<"\n MAIN MENU";
	  cout<<"\n 1. RESULT MENU";
	  cout<<"\n 2. ENTRY/EDIT MENU";
	  cout<<"\n 3. EXIT";
	  cout<<"\n Please Select Your Option (1-3) ";
	  cin>>charec;
	  switch(charec)
	  {
		 case '1': clrscr();
			   result();
			   break;
		  case '2': entry_menu();
			    break;
		  case '3':exit(0);
		  default :cout<<"Choose option";
	}
    }while(charec!='3');
}

