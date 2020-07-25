#include <iostream.h>
#include <conio.h>
#include <process.h>
#include <dos.h>
#include <time.h>
#include <stdlib.h>
int count = 0;
void table(char square[10])
{
	cout << "     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
	cout << "     |     |     " << endl << endl;
}

int opt =0;

int option()
{
cout<<"Enter 1 to play against computer and 2 to play against another player or 0 to quit";
cin>>opt;
if (opt==0)
	exit(0);
return opt;
}

void func(int &player,int &choice,char square[10])
{

	if (player==2)
		{
		hi:
		count++;
		if (choice == 1&&square[1]=='1' )
			square[1] = 'O';
		else if (choice == 2&&square[2]=='2' )
			square[2] = 'O';
		else if (choice == 3&&square[3]=='3')
			square[3] = 'O';

		else if (choice == 4&&square[4]=='4' )
			square[4] = 'O';
		else if (choice == 5&&square[5]=='5' )
			square[5] = 'O';
		else if (choice == 6&&square[6]=='6' )
			square[6] = 'O';
		else if (choice == 7&&square[7]=='7' )
			square[7] = 'O';
		else if (choice == 8 &&square[8]=='8')
			square[8] = 'O';
		else if (choice == 9 &&square[9]=='9')
			square[9] = 'O';
		else
		{
		       cout<<"write a number fro 1-9, try again ";
			cin>>choice;
			count--;
			goto hi;
		}
		}
		}
struct student
{
    char name[50];
    int age;
};

char square[10]= {'o','1','2','3','4','5','6','7','8','9'} ;
char win(char square[10]);

void main()
{
	char ans;
    do
    {
     clrscr();
    student s,p;
    int y;
    y = option();
    if (y==2)
    {
    cout << "Enter information of player 1," << endl;
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter age: ";
    cin >> s.age;
    }
    cout << "Enter information of player 2," << endl;
    cout << "Enter name: ";
    cin >> p.name;
    cout << "Enter age: ";
    cin >> p.age;


	int player = 1,choice;
	char i;
	clrscr();

	if (y==1)
	{
	do
	{
	player = 1;
	cout << "\nTic Tac Toe\n";
	cout << "Computer (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
	cout << "     |     |     " << endl << endl;
	if (player ==1)
	{
	int number;
	cout<<"COMPUTER PROCESSING....." <<endl;
	ran:

	randomize();
	number = 1+random(9);

		if (number == 1&&square[1]=='1' )
			square[1] = 'X';
		else if (number == 2&&square[2]=='2' )
			square[2] = 'X';
		else if (number == 3&&square[3]=='3')
			square[3] = 'X';
		else if (number == 4&&square[4]=='4' )
			square[4] = 'X';
		else if (number == 5&&square[5]=='5' )
			square[5] = 'X';
		else if (number == 6&&square[6]=='6' )
			square[6] = 'X';
		else if (number == 7&&square[7]=='7' )
			square[7] = 'X';
		else if (number == 8 &&square[8]=='8')
			square[8] = 'X';
		else if (number == 9 &&square[9]=='9')
			square[9] = 'X';
		else
		{
			goto ran;

		}
		i = win(square);
		if (i=='w')
		break;
		count++;
		}
		player++;
		table(square);
		cout<<"enter choice or 0 to quit"<<endl;
		cin>>choice;
		if (choice==0)
		exit(0);
		func(player,choice,square);

		i=win(square);
	}while(i=='l'&&count<9);
	cout <<"********************"<<endl;
	cout << "*     |     |      *" << endl;
	cout << "*  " << square[1] << "  |  " << square[2] << "  |  " << square[3]<<"   *"<< endl;
	cout << "*_____|_____|_____ *" << endl;
	cout << "*     |     |      *" << endl;
	cout << "*  " << square[4] << "  |  " << square[5] << "  |  " << square[6] <<"   *"<<endl;
	cout << "*_____|_____|_____ *" << endl;
	cout << "*     |     |      *" << endl;
	cout << "*  " << square[7] << "  |  " << square[8] << "  |  " << square[9] <<"   *"<< endl;
	cout << "*     |     |      *" << endl;
	cout <<"********************";

	if(i=='w'){

		if (player == 1)
		cout<<"\ncomputer "<<"wins. Press enter to continue"<<endl;
		else
		cout<<p.name<<"  "<<"wins. Press enter to continue";
		for(int a=0;a<=5;a++)
		{
		sound(a*1000);
		delay(1000);
		}
	       }
	else
		cout<<"\nGame draw";
	nosound();
	getche();
	}
	if (y==2)
	{
	do
	{
	cout << "\nTic Tac Toe\n";

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout<< p.name<<" VS "<<s.name;
	cout << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
	cout << "     |     |     " << endl << endl;
	player=(player%2)?1:2;
	if (player ==1)
	cout << "Player, "<<s.name<< ",enter in which box you want to place your number: or 0 to quit ";
	else
	cout << "Player, "<<p.name<< ",enter in which box you want to place your number: or 0 to quit ";
	cin >> choice;
	count++;
	if (choice==0)
		exit(0);
	if (player==1)
	{

		if (choice == 1&&square[1]=='1' )
			square[1] = 'X';
		else if (choice == 2&&square[2]=='2' )
			square[2] = 'X';
		else if (choice == 3&&square[3]=='3')
			square[3] = 'X';
		else if (choice == 4&&square[4]=='4' )
			square[4] = 'X';
		else if (choice == 5&&square[5]=='5' )
			square[5] = 'X';
		else if (choice == 6&&square[6]=='6' )
			square[6] = 'X';
		else if (choice == 7&&square[7]=='7' )
			square[7] = 'X';
		else if (choice == 8 &&square[8]=='8')
			square[8] = 'X';
		else if (choice == 9 &&square[9]=='9')
			square[9] = 'X';
		else
		{
			cout<<" Invalid number, try again ";
			player = player -1;
			getche();
		}
		}
		if (player==2)
		{
		if (choice == 1&&square[1]=='1' )
			square[1] = 'O';
		else if (choice == 2&&square[2]=='2' )
			square[2] = 'O';
		else if (choice == 3&&square[3]=='3')
			square[3] = 'O';

		else if (choice == 4&&square[4]=='4' )
			square[4] = 'O';
		else if (choice == 5&&square[5]=='5' )
			square[5] = 'O';
		else if (choice == 6&&square[6]=='6' )
			square[6] = 'O';
		else if (choice == 7&&square[7]=='7' )
			square[7] = 'O';
		else if (choice == 8 &&square[8]=='8')
			square[8] = 'O';
		else if (choice == 9 &&square[9]=='9')
			square[9] = 'O';
		else
		{
			cout<<"write a number from 1-9, try again ";
			player = player -1;
			getche();
		}
		}
		i=win(square);
		player++;
	}while(i=='l'&&count<9);
		cout <<"********************"<<endl;
	cout << "*     |     |      *" << endl;
	cout << "*  " << square[1] << "  |  " << square[2] << "  |  " << square[3]<<"   *"<< endl;
	cout << "*_____|_____|_____ *" << endl;
	cout << "*     |     |      *" << endl;
	cout << "*  " << square[4] << "  |  " << square[5] << "  |  " << square[6] <<"   *"<<endl;
	cout << "*_____|_____|_____ *" << endl;
	cout << "*     |     |      *" << endl;
	cout << "*  " << square[7] << "  |  " << square[8] << "  |  " << square[9] <<"   *"<< endl;
	cout << "*     |     |      *" << endl;
	cout <<"********************";

	if(i=='w')
	{
		if (--player==1)
		cout<<"\nPlayer "<<s.name<<"\a win "<<endl;
		else
		cout<<"\nPlayer "<<p.name<<"\a win "<<endl;
		for(int a=0;a<=5;a++)
		{
		sound(a*1000);
		delay(1000);
		}
	       }
	else
		cout<<"\nGame draw";
	nosound();
	getche();
	}


	cout<<"Do you want to play another game,press y or 0 to quit";
	cin>>ans;
	if (ans=='y')
	{
	int k=48;
	count=0;
	for (int j=0;j<=9;j++)
	{
	square[j]=(char )k;
	k++;
	}
	}
	}while(ans=='y'||ans=='Y');
	}


char win(char square[10])
{
	if (square[1] == square[2] && square[2] == square[3])
		return 'w';
	else if (square[4] == square[5] && square[5] == square[6])
		return 'w';
	else if (square[7] == square[8] && square[8] == square[9])
		return 'w';
	else if (square[1] == square[4] && square[4] == square[7])
		return 'w';
	else if (square[2] == square[5] && square[5] == square[8])
		return 'w';
	else if (square[3] == square[6] && square[6] == square[9])
		return 'w';
	else if (square[1] == square[5] && square[5] == square[9])
		return 'w';
	else if (square[3] == square[5] && square[5] == square[7])
		return 'w';
	else
		return 'l';
}










