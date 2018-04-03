#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
struct doctor
{
char name[20];
}d[12];
void enter(int c)
{
if(c==10)
cout<<"TEN";
if(c==11)
cout<<"ELEVEN";
if(c==12)
cout<<"TWELVE";
if(c==13)
cout<<"THIRTEEN";
if(c==14)
cout<<"FOURTEEN";
if(c==15)
cout<<"FIFTEEN";
if(c==16)
cout<<"SIXTEEN";
if(c==17)
cout<<"SEVENTEEN";
if(c==18)
cout<<"EIGHTEEN";
if(c==19)
cout<<"NINETEEN";
}
void display(int a,int c,int e,int q,int l,int j)
{
if(c==1)
{
if(a== 1)
{
d[c].name[0]='O';
d[c].name[1]='N';
d[c].name[2]='E';
}
else if(a== 2)
{
d[c].name[0]='T';
d[c].name[1]='W';
d[c].name[2]='O';
}
else if(a== 3)
{
d[c].name[0]='T';
d[c].name[1]='H';
d[c].name[2]='R';
d[c].name[3]='E';
d[c].name[4]='E';
}
else if(a== 4)
{
d[c].name[0]='F';
d[c].name[1]='O';
d[c].name[2]='U';
d[c].name[3]='R';
}
else if(a== 5)
{
d[c].name[0]='F';
d[c].name[1]='I';
d[c].name[2]='V';
d[c].name[3]='E';
}
else if(a== 6)
{
d[c].name[0]='S';
d[c].name[1]='I';
d[c].name[2]='X';
}
else if(a== 7)
{
d[c].name[0]='S';
d[c].name[1]='E';
d[c].name[2]='V';
d[c].name[3]='E';
d[c].name[4]='N';
}
else if(a== 8)
{
d[c].name[0]='E';
d[c].name[1]='I';
d[c].name[2]='G';
d[c].name[3]='H';
d[c].name[4]='T';
}
else if(a== 9)
{
d[c].name[0]='N';
d[c].name[1]='I';
d[c].name[2]='N';
d[c].name[3]='E';
}
}
else if(c==2)
{
if(a== 1)
{
if(d==0)
{
d[c].name[0]='T';
d[c].name[1]='E';
d[c].name[2]='N';
}
else if(e==1)
{
d[c].name[0]='E';
d[c].name[1]='L';
d[c].name[2]='E';
d[c].name[3]='V';
d[c].name[4]='E';
d[c].name[5]='N';
}
else if(e==2)
{
d[c].name[0]='T';
d[c].name[1]='W';
d[c].name[2]='E';
d[c].name[3]='L';
d[c].name[4]='V';
d[c].name[5]='E';
}
else if(e==3)
{
d[c].name[0]='T';
d[c].name[1]='H';
d[c].name[2]='I';
d[c].name[3]='R';
d[c].name[4]='T';
d[c].name[5]='E';
d[c].name[6]='E';
d[c].name[7]='N';
}
else if(e==4)
{
d[c].name[0]='F';
d[c].name[1]='O';
d[c].name[2]='U';
d[c].name[3]='R';
d[c].name[4]='T';
d[c].name[5]='E';
d[c].name[6]='E';
d[c].name[7]='N';
}
else if(e==5)
{
d[c].name[0]='F';
d[c].name[1]='I';
d[c].name[2]='F';
d[c].name[3]='T';
d[c].name[4]='E';
d[c].name[5]='E';
d[c].name[6]='N';
}
else if(e==6)
{
d[c].name[0]='S';
d[c].name[1]='I';
d[c].name[2]='X';
d[c].name[3]='T';
d[c].name[4]='E';
d[c].name[5]='E';
d[c].name[6]='N';
}
else if(e==7)
{
d[c].name[0]='S';
d[c].name[1]='E';
d[c].name[2]='V';
d[c].name[3]='E';
d[c].name[4]='N';
d[c].name[5]='T';
d[c].name[6]='E';
d[c].name[7]='E';
d[c].name[8]='N';
}
else if(e==8)
{
d[c].name[0]='E';
d[c].name[1]='I';
d[c].name[2]='G';
d[c].name[3]='H';
d[c].name[4]='T';
d[c].name[5]='E';
d[c].name[6]='E';
d[c].name[7]='N';
}
else if(e==9)
{
d[c].name[0]='N';
d[c].name[1]='I';
d[c].name[2]='N';
d[c].name[3]='E';
d[c].name[4]='T';
d[c].name[5]='E';
d[c].name[6]='E';
d[c].name[7]='N';
}
}
else if(a== 2)
{
d[c].name[0]='T';
d[c].name[1]='W';
d[c].name[2]='E';
d[c].name[3]='N';
d[c].name[4]='T';
d[c].name[5]='Y';
}
else if(a== 3)
{
d[c].name[0]='T';
d[c].name[1]='H';
d[c].name[2]='I';
d[c].name[3]='R';
d[c].name[4]='T';
d[c].name[5]='Y';
}
else if(a== 4)
{
d[c].name[0]='F';
d[c].name[1]='O';
d[c].name[2]='R';
d[c].name[3]='T';d[c].name[4]='Y';
}
else if(a== 5)
{
d[c].name[0]='F';
d[c].name[1]='I';
d[c].name[2]='F';
d[c].name[3]='T';
d[c].name[4]='Y';
}
else if(a== 6)
{
d[c].name[0]='S';
d[c].name[1]='I';
d[c].name[2]='X';
d[c].name[3]='T';d[c].name[4]='Y';
}
else if(a== 7)
{
d[c].name[0]='S';
d[c].name[1]='E';
d[c].name[2]='V';
d[c].name[3]='E';
d[c].name[4]='N';
d[c].name[5]='T';d[c].name[6]='Y';
}
else if(a== 8)
{
d[c].name[0]='E';
d[c].name[1]='I';
d[c].name[2]='G';
d[c].name[3]='H';
d[c].name[4]='T';
d[c].name[5]='Y';
}
else if(a== 9)
{
d[c].name[0]='N';
d[c].name[1]='I';
d[c].name[2]='N';
d[c].name[3]='E';
d[c].name[4]='T';d[c].name[5]='Y';
}
}
else if(c==3)
{
if(a== 1)
{
d[c].name[0]='O';
d[c].name[1]='N';
d[c].name[2]='E';
d[c].name[3]=' ';
d[c].name[4]='H';
d[c].name[5]='U';
d[c].name[6]='N';
d[c].name[7]='D';
d[c].name[8]='R';
d[c].name[9]='E';
d[c].name[10]='D';
if(q!=0)
{
d[c].name[11]=' ';
d[c].name[12]='A';
d[c].name[13]='N';
d[c].name[14]='D';
}
}
else if(a== 2)
{
d[c].name[0]='T';
d[c].name[1]='W';
d[c].name[2]='O';
d[c].name[3]=' ';
d[c].name[4]='H';
d[c].name[5]='U';
d[c].name[6]='N';
d[c].name[7]='D';
d[c].name[8]='R';
d[c].name[9]='E';
d[c].name[10]='D';
if(q!=0)
{
d[c].name[11]=' ';
d[c].name[12]='A';
d[c].name[13]='N';
d[c].name[14]='D';
}
}
else if(a== 3)
{
d[c].name[0]='T';
d[c].name[1]='H';
d[c].name[2]='R';
d[c].name[3]='E';
d[c].name[4]='E';
d[c].name[5]=' ';
d[c].name[6]='H';
d[c].name[7]='U';
d[c].name[8]='N';
d[c].name[9]='D';
d[c].name[10]='R';
d[c].name[11]='E';
d[c].name[12]='D';
if(q!=0)
{
d[c].name[13]=' ';
d[c].name[14]='A';
d[c].name[15]='N';
d[c].name[16]='D';
}}
else if(a== 4)
{
d[c].name[0]='F';
d[c].name[1]='O';
d[c].name[2]='U';
d[c].name[3]='R';
d[c].name[4]=' ';
d[c].name[5]='H';
d[c].name[6]='U';
d[c].name[7]='N';
d[c].name[8]='D';
d[c].name[9]='R';
d[c].name[10]='E';
d[c].name[11]='D';
if(q!=0)
{
d[c].name[12]=' ';
d[c].name[13]='A';
d[c].name[14]='N';
d[c].name[15]='D';
}}
else if(a== 5)
{
d[c].name[0]='F';
d[c].name[1]='I';
d[c].name[2]='V';
d[c].name[3]='E';
d[c].name[4]=' ';
d[c].name[5]='H';
d[c].name[6]='U';
d[c].name[7]='N';
d[c].name[8]='D';
d[c].name[9]='R';
d[c].name[10]='E';
d[c].name[11]='D';
if(q!=0)
{
d[c].name[12]=' ';
d[c].name[13]='A';
d[c].name[14]='N';
d[c].name[15]='D';
}}
else if(a== 6)
{

d[c].name[0]='S';
d[c].name[1]='I';
d[c].name[2]='X';
d[c].name[3]=' ';
d[c].name[4]='H';
d[c].name[5]='U';
d[c].name[6]='N';
d[c].name[7]='D';
d[c].name[8]='R';
d[c].name[9]='E';
d[c].name[10]='D';
if(q!=0)
{
d[c].name[11]=' ';
d[c].name[12]='A';
d[c].name[13]='N';
d[c].name[14]='D';
}}
else if(a== 7)
{d[c].name[0]='S';
d[c].name[1]='E';
d[c].name[2]='V';
d[c].name[3]='E';
d[c].name[4]='N';
d[c].name[5]=' ';
d[c].name[6]='H';
d[c].name[7]='U';
d[c].name[8]='N';
d[c].name[9]='D';
d[c].name[10]='R';
d[c].name[11]='E';
d[c].name[12]='D';
if(q!=0)
{
d[c].name[13]=' ';
d[c].name[14]='A';
d[c].name[15]='N';
d[c].name[16]='D';
}}
else if(a== 8)
{
d[c].name[0]='E';
d[c].name[1]='I';
d[c].name[2]='G';
d[c].name[3]='H';
d[c].name[4]='T';
d[c].name[5]=' ';
d[c].name[6]='H';
d[c].name[7]='U';
d[c].name[8]='N';
d[c].name[9]='D';
d[c].name[10]='R';
d[c].name[11]='E';
d[c].name[12]='D';
if(q!=0)
{
d[c].name[13]=' ';
d[c].name[14]='A';
d[c].name[15]='N';
d[c].name[16]='D';
}}
else if(a== 9)
{
d[c].name[0]='N';
d[c].name[1]='I';
d[c].name[2]='N';
d[c].name[3]='E';
d[c].name[4]=' ';
d[c].name[5]='H';
d[c].name[6]='U';
d[c].name[7]='N';
d[c].name[8]='D';
d[c].name[9]='R';
d[c].name[10]='E';
d[c].name[11]='D';
if(q!=0)
{
d[c].name[12]=' ';
d[c].name[13]='A';
d[c].name[14]='N';
d[c].name[15]='D';
}}
}
else if(c==4)
{
if(a== 1)
{
d[c].name[0]='O';
d[c].name[1]='N';
d[c].name[2]='E';
d[c].name[3]=' ';
d[c].name[4]='T';
d[c].name[5]='H';
d[c].name[6]='O';
d[c].name[7]='U';
d[c].name[8]='S';
d[c].name[9]='A';
d[c].name[10]='N';
d[c].name[11]='D';

}
else if(a== 2)
{
d[c].name[0]='T';
d[c].name[1]='W';
d[c].name[2]='O';
d[c].name[3]=' ';
d[c].name[4]='T';
d[c].name[5]='H';
d[c].name[6]='O';
d[c].name[7]='U';
d[c].name[8]='S';
d[c].name[9]='A';
d[c].name[10]='N';
d[c].name[11]='D';

}
else if(a== 3)
{
d[c].name[0]='T';
d[c].name[1]='H';
d[c].name[2]='R';
d[c].name[3]='E';
d[c].name[4]='E';
d[c].name[5]=' ';
d[c].name[6]='T';
d[c].name[7]='H';
d[c].name[8]='O';
d[c].name[9]='U';
d[c].name[10]='S';
d[c].name[11]='A';
d[c].name[12]='N';
d[c].name[13]='D';

}
else if(a== 4)
{
d[c].name[0]='F';
d[c].name[1]='O';
d[c].name[2]='U';
d[c].name[3]='R';
d[c].name[4]=' ';
d[c].name[5]='T';
d[c].name[6]='H';
d[c].name[7]='O';
d[c].name[8]='U';
d[c].name[9]='S';
d[c].name[10]='A';
d[c].name[11]='N';
d[c].name[12]='D';

}
else if(a== 5)
{
d[c].name[0]='F';
d[c].name[1]='I';
d[c].name[2]='V';
d[c].name[3]='E';
d[c].name[4]=' ';
d[c].name[5]='T';
d[c].name[6]='H';
d[c].name[7]='O';
d[c].name[8]='U';
d[c].name[9]='S';
d[c].name[10]='A';
d[c].name[11]='N';
d[c].name[12]='D';

}
else if(a== 6)
{

d[c].name[0]='S';
d[c].name[1]='I';
d[c].name[2]='X';
d[c].name[3]=' ';
d[c].name[4]='T';
d[c].name[5]='H';
d[c].name[6]='O';
d[c].name[7]='U';
d[c].name[8]='S';
d[c].name[9]='A';
d[c].name[10]='N';
d[c].name[11]='D';

}
else if(a== 7)
{d[c].name[0]='S';
d[c].name[1]='E';
d[c].name[2]='V';
d[c].name[3]='E';
d[c].name[4]='N';
d[c].name[5]=' ';
d[c].name[6]='T';
d[c].name[7]='H';
d[c].name[8]='O';
d[c].name[9]='U';
d[c].name[10]='S';
d[c].name[11]='A';
d[c].name[12]='N';
d[c].name[13]='D';

}
else if(a== 8)
{
d[c].name[0]='E';
d[c].name[1]='I';
d[c].name[2]='G';
d[c].name[3]='H';
d[c].name[4]='T';
d[c].name[5]=' ';
d[c].name[6]='T';
d[c].name[7]='H';
d[c].name[8]='O';
d[c].name[9]='U';
d[c].name[10]='S';
d[c].name[11]='A';
d[c].name[12]='N';
d[c].name[13]='D';

}
else if(a== 9)
{
d[c].name[0]='N';
d[c].name[1]='I';
d[c].name[2]='N';
d[c].name[3]='E';
d[c].name[4]=' ';
d[c].name[5]='T';
d[c].name[6]='H';
d[c].name[7]='O';
d[c].name[8]='U';
d[c].name[9]='S';
d[c].name[10]='A';
d[c].name[11]='N';
d[c].name[12]='D';

}
}
else if(c==5)
{
if(a== 1)
{
if(l==0)
{
d[c].name[0]='T';
d[c].name[1]='E';
d[c].name[2]='N';
d[c].name[3]=' ';
d[c].name[4]='T';
d[c].name[5]='H';
d[c].name[6]='O';
d[c].name[7]='U';
d[c].name[8]='S';
d[c].name[9]='A';
d[c].name[10]='N';
d[c].name[11]='D';

}

else if(l==1)
{
d[c].name[0]='E';
d[c].name[1]='L';
d[c].name[2]='E';
d[c].name[3]='V';
d[c].name[4]='E';
d[c].name[5]='N';
d[c].name[6]=' ';
d[c].name[7]='T';
d[c].name[8]='H';
d[c].name[9]='O';
d[c].name[10]='U';
d[c].name[11]='S';
d[c].name[12]='A';
d[c].name[13]='N';
d[c].name[14]='D';

}

else if(l==2)
{
d[c].name[0]='T';
d[c].name[1]='W';
d[c].name[2]='E';
d[c].name[3]='L';
d[c].name[4]='V';
d[c].name[5]='E';
d[c].name[6]=' ';
d[c].name[7]='T';
d[c].name[8]='H';
d[c].name[9]='O';
d[c].name[10]='U';
d[c].name[11]='S';
d[c].name[12]='A';
d[c].name[13]='N';
d[c].name[14]='D';

}
else if(l==3)
{
d[c].name[0]='T';
d[c].name[1]='H';
d[c].name[2]='I';
d[c].name[3]='R';
d[c].name[4]='T';
d[c].name[5]='E';
d[c].name[6]='E';
d[c].name[7]='N';
d[c].name[8]=' ';
d[c].name[9]='T';
d[c].name[10]='H';
d[c].name[11]='O';
d[c].name[12]='U';
d[c].name[13]='S';
d[c].name[14]='A';
d[c].name[15]='N';
d[c].name[16]='D';

}
else if(l==4)
{
d[c].name[0]='F';
d[c].name[1]='O';
d[c].name[2]='U';
d[c].name[3]='R';
d[c].name[4]='T';
d[c].name[5]='E';
d[c].name[6]='E';
d[c].name[7]='N';
d[c].name[8]=' ';
d[c].name[9]='T';
d[c].name[10]='H';
d[c].name[11]='O';
d[c].name[12]='U';
d[c].name[13]='S';
d[c].name[14]='A';
d[c].name[15]='N';
d[c].name[16]='D';

}
else if(l==5)
{
d[c].name[0]='F';
d[c].name[1]='I';
d[c].name[2]='F';
d[c].name[3]='T';
d[c].name[4]='E';
d[c].name[5]='E';
d[c].name[6]='N';
d[c].name[7]=' ';
d[c].name[8]='T';
d[c].name[9]='H';
d[c].name[10]='O';
d[c].name[11]='U';
d[c].name[12]='S';
d[c].name[13]='A';
d[c].name[14]='N';
d[c].name[15]='D';


}
else if(l==6)
{
d[c].name[0]='S';
d[c].name[1]='I';
d[c].name[2]='X';
d[c].name[3]='T';
d[c].name[4]='E';
d[c].name[5]='E';
d[c].name[6]='N';
d[c].name[7]=' ';
d[c].name[8]='T';
d[c].name[9]='H';
d[c].name[10]='O';
d[c].name[11]='U';
d[c].name[12]='S';
d[c].name[13]='A';
d[c].name[14]='N';
d[c].name[15]='D';

}
else if(l==7)
{
d[c].name[0]='S';
d[c].name[1]='E';
d[c].name[2]='V';
d[c].name[3]='E';
d[c].name[4]='N';
d[c].name[5]='T';
d[c].name[6]='E';
d[c].name[7]='E';
d[c].name[8]='N';
d[c].name[9]=' ';
d[c].name[10]='T';
d[c].name[11]='H';
d[c].name[12]='O';
d[c].name[13]='U';
d[c].name[14]='S';
d[c].name[15]='A';
d[c].name[16]='N';
d[c].name[17]='D';

}
else if(l==8)
{
d[c].name[0]='E';
d[c].name[1]='I';
d[c].name[2]='G';
d[c].name[3]='H';
d[c].name[4]='T';
d[c].name[5]='E';
d[c].name[6]='E';
d[c].name[7]='N';
d[c].name[8]=' ';
d[c].name[9]='T';
d[c].name[10]='H';
d[c].name[11]='O';
d[c].name[12]='U';
d[c].name[13]='S';
d[c].name[14]='A';
d[c].name[15]='N';
d[c].name[16]='D';


}
else if(l==9)
{
d[c].name[0]='N';
d[c].name[1]='I';
d[c].name[2]='N';
d[c].name[3]='E';
d[c].name[4]='T';
d[c].name[5]='E';
d[c].name[6]='E';
d[c].name[7]='N';
d[c].name[8]=' ';
d[c].name[9]='T';
d[c].name[10]='H';
d[c].name[11]='O';
d[c].name[12]='U';
d[c].name[13]='S';
d[c].name[14]='A';
d[c].name[15]='N';
d[c].name[16]='D';

}
}


else if(a== 2)
{
d[c].name[0]='T';
d[c].name[1]='W';
d[c].name[2]='E';
d[c].name[3]='N';
d[c].name[4]='T';
d[c].name[5]='Y';


}
else if(a== 3)
{
d[c].name[0]='T';
d[c].name[1]='H';
d[c].name[2]='I';
d[c].name[3]='R';
d[c].name[4]='T';
d[c].name[5]='Y';


}
else if(a== 4)
{
d[c].name[0]='F';
d[c].name[1]='O';
d[c].name[2]='R';
d[c].name[3]='T';
d[c].name[4]='Y ';


}
else if(a== 5)
{
d[c].name[0]='F';
d[c].name[1]='I';
d[c].name[2]='F';
d[c].name[3]='T';
d[c].name[4]='Y';


}
else if(a== 6)
{

d[c].name[0]='S';
d[c].name[1]='I';
d[c].name[2]='X';
d[c].name[3]='T';
d[c].name[4]='Y';

}
else if(a== 7)
{d[c].name[0]='S';
d[c].name[1]='E';
d[c].name[2]='V';
d[c].name[3]='E';
d[c].name[4]='N';
d[c].name[5]='T';
d[c].name[6]='Y';


}
else if(a== 8)
{
d[c].name[0]='E';
d[c].name[1]='I';
d[c].name[2]='G';
d[c].name[3]='H';
d[c].name[4]='T';
d[c].name[5]='Y';


}
else if(a== 9)
{
d[c].name[0]='N';
d[c].name[1]='I';
d[c].name[2]='N';
d[c].name[3]='E';
d[c].name[4]='T';
d[c].name[5]='Y';

}
}
else if(c==6)
{
if(a== 1)
{
d[c].name[0]='O';
d[c].name[1]='N';
d[c].name[2]='E';
d[c].name[3]=' ';
d[c].name[4]='H';
d[c].name[5]='U';
d[c].name[6]='N';
d[c].name[7]='D';
d[c].name[8]='R';
d[c].name[9]='E';
d[c].name[10]='D';
if(q!=0 && j!=0)
{
d[c].name[11]=' ';
d[c].name[12]='A';
d[c].name[13]='N';
d[c].name[14]='D';
}
}
else if(a== 2)
{
d[c].name[0]='T';
d[c].name[1]='W';
d[c].name[2]='O';
d[c].name[3]=' ';
d[c].name[4]='H';
d[c].name[5]='U';
d[c].name[6]='N';
d[c].name[7]='D';
d[c].name[8]='R';
d[c].name[9]='E';
d[c].name[10]='D';
if(q!=0 && j!=0)
{
d[c].name[11]=' ';
d[c].name[12]='A';
d[c].name[13]='N';
d[c].name[14]='D';
}
}
else if(a== 3)
{
d[c].name[0]='T';
d[c].name[1]='H';
d[c].name[2]='R';
d[c].name[3]='E';
d[c].name[4]='E';
d[c].name[5]=' ';
d[c].name[6]='H';
d[c].name[7]='U';
d[c].name[8]='N';
d[c].name[9]='D';
d[c].name[10]='R';
d[c].name[11]='E';
d[c].name[12]='D';
if(q!=0 && j!=0)
{
d[c].name[13]=' ';
d[c].name[14]='A';
d[c].name[15]='N';
d[c].name[16]='D';
}}
else if(a== 4)
{
d[c].name[0]='F';
d[c].name[1]='O';
d[c].name[2]='U';
d[c].name[3]='R';
d[c].name[4]=' ';
d[c].name[5]='H';
d[c].name[6]='U';
d[c].name[7]='N';
d[c].name[8]='D';
d[c].name[9]='R';
d[c].name[10]='E';
d[c].name[11]='D';
if(q!=0 && j!=0)
{
d[c].name[12]=' ';
d[c].name[13]='A';
d[c].name[14]='N';
d[c].name[15]='D';
}}
else if(a== 5)
{
d[c].name[0]='F';
d[c].name[1]='I';
d[c].name[2]='V';
d[c].name[3]='E';
d[c].name[4]=' ';
d[c].name[5]='H';
d[c].name[6]='U';
d[c].name[7]='N';
d[c].name[8]='D';
d[c].name[9]='R';
d[c].name[10]='E';
d[c].name[11]='D';
if(q!=0 && j!=0)
{
d[c].name[12]=' ';
d[c].name[13]='A';
d[c].name[14]='N';
d[c].name[15]='D';
}}
else if(a== 6)
{

d[c].name[0]='S';
d[c].name[1]='I';
d[c].name[2]='X';
d[c].name[3]=' ';
d[c].name[4]='H';
d[c].name[5]='U';
d[c].name[6]='N';
d[c].name[7]='D';
d[c].name[8]='R';
d[c].name[9]='E';
d[c].name[10]='D';
if(q!=0 && j!=0)
{
d[c].name[11]=' ';
d[c].name[12]='A';
d[c].name[13]='N';
d[c].name[14]='D';
}}
else if(a== 7)
{d[c].name[0]='S';
d[c].name[1]='E';
d[c].name[2]='V';
d[c].name[3]='E';
d[c].name[4]='N';
d[c].name[5]=' ';
d[c].name[6]='H';
d[c].name[7]='U';
d[c].name[8]='N';
d[c].name[9]='D';
d[c].name[10]='R';
d[c].name[11]='E';
d[c].name[12]='D';
if(q!=0 && j!=0)
{
d[c].name[13]=' ';
d[c].name[14]='A';
d[c].name[15]='N';
d[c].name[16]='D';
}}
else if(a== 8)
{
d[c].name[0]='E';
d[c].name[1]='I';
d[c].name[2]='G';
d[c].name[3]='H';
d[c].name[4]='T';
d[c].name[5]=' ';
d[c].name[6]='H';
d[c].name[7]='U';
d[c].name[8]='N';
d[c].name[9]='D';
d[c].name[10]='R';
d[c].name[11]='E';
d[c].name[12]='D';
if(q!=0 && j!=0)
{
d[c].name[13]=' ';
d[c].name[14]='A';
d[c].name[15]='N';
d[c].name[16]='D';
}}
else if(a== 9)
{
d[c].name[0]='N';
d[c].name[1]='I';
d[c].name[2]='N';
d[c].name[3]='E';
d[c].name[4]=' ';
d[c].name[5]='H';
d[c].name[6]='U';
d[c].name[7]='N';
d[c].name[8]='D';
d[c].name[9]='R';
d[c].name[10]='E';
d[c].name[11]='D';
if(q!=0 && j!=0)
{
d[c].name[12]=' ';
d[c].name[13]='A';
d[c].name[14]='N';
d[c].name[15]='D';
}}
}
else if(c==7)
{
if(a== 1)
{
d[c].name[0]='O';
d[c].name[1]='N';
d[c].name[2]='E';
d[c].name[3]=' ';
d[c].name[4]='M';
d[c].name[5]='I';
d[c].name[6]='L';
d[c].name[7]='L';
d[c].name[8]='I';
d[c].name[9]='O';
d[c].name[10]='N ';

}
else if(a== 2)
{
d[c].name[0]='T';
d[c].name[1]='W';
d[c].name[2]='O';
d[c].name[3]=' ';
d[c].name[4]='M';
d[c].name[5]='I';
d[c].name[6]='L';
d[c].name[7]='L';
d[c].name[8]='I';
d[c].name[9]='O';
d[c].name[10]='N';

}
else if(a== 3)
{
d[c].name[0]='T';
d[c].name[1]='H';
d[c].name[2]='R';
d[c].name[3]='E';
d[c].name[4]='E';
d[c].name[5]=' ';
d[c].name[6]='M';
d[c].name[7]='I';
d[c].name[8]='L';
d[c].name[9]='L';
d[c].name[10]='I';
d[c].name[11]='O';
d[c].name[12]='N';
}
else if(a== 4)
{
d[c].name[0]='F';
d[c].name[1]='O';
d[c].name[2]='U';
d[c].name[3]='R';
d[c].name[4]=' ';
d[c].name[5]='M';
d[c].name[6]='I';
d[c].name[7]='L';
d[c].name[8]='L';
d[c].name[9]='I';
d[c].name[10]='O';
d[c].name[11]='N';

}
else if(a== 5)
{
d[c].name[0]='F';
d[c].name[1]='I';
d[c].name[2]='V';
d[c].name[3]='E';
d[c].name[4]=' ';
d[c].name[5]='M';
d[c].name[6]='I';
d[c].name[7]='L';
d[c].name[8]='L';
d[c].name[9]='I';
d[c].name[10]='O';
d[c].name[11]='N';
}
else if(a== 6)
{

d[c].name[0]='S';
d[c].name[1]='I';
d[c].name[2]='X';
d[c].name[3]=' ';
d[c].name[4]='M';
d[c].name[5]='I';
d[c].name[6]='L';
d[c].name[7]='L';
d[c].name[8]='I';
d[c].name[9]='O';
d[c].name[10]='N';

}
else if(a== 7)
{d[c].name[0]='S';
d[c].name[1]='E';
d[c].name[2]='V';
d[c].name[3]='E';
d[c].name[4]='N';
d[c].name[5]=' ';
d[c].name[6]='M';
d[c].name[7]='I';
d[c].name[8]='L';
d[c].name[9]='L';
d[c].name[10]='I';
d[c].name[11]='O';
d[c].name[12]='N';
}
else if(a== 8)
{
d[c].name[0]='E';
d[c].name[1]='I';
d[c].name[2]='G';
d[c].name[3]='H';
d[c].name[4]='T';
d[c].name[5]=' ';
d[c].name[6]='M';
d[c].name[7]='I';
d[c].name[8]='L';
d[c].name[9]='L';
d[c].name[10]='I';
d[c].name[11]='O';
d[c].name[12]='N';
}
else if(a== 9)
{
d[c].name[0]='N';
d[c].name[1]='I';
d[c].name[2]='N';
d[c].name[3]='E';
d[c].name[4]=' ';
d[c].name[5]='M';
d[c].name[6]='I';
d[c].name[7]='L';
d[c].name[8]='L';
d[c].name[9]='I';
d[c].name[10]='O';
d[c].name[11]='N';
}
}
}
void main()
{
open:
char ch,ch2;
long int number,kj,jk,fk,sum,orignum,mod;
int l,digit,ch0,count=0,digit1,i,digit2,dig,q,s,e,k,g,digit3;
clrscr();
{
cout<<endl;
textcolor(6);
cprintf("########################################################################");
cout<<endl;
cprintf("#########################################################################");
cout<<endl;
cprintf("###     #####  ###  #######  ##     ###     ##      ####       ##      ###");
cout<<endl;
cprintf("###  #  #####  ###  #######  ##  #  ###  #  ##  ####  ##  #######  ####  ##");
cout<<endl;
cprintf("###  ##  ####  ###  #######  ##  ##  #  ##  ##  ###  ###  #######  ###  #### ");
cout<<endl;
cprintf("###  ###  ###  ###  #######  ##  ###  ####  ##       ###     ####     #######");
cout<<endl;
cprintf("###  ####  ##  ###  #######  ##  #########  ##  ####  ##  #######  #  ########");
cout<<endl;
cprintf("###  #####  #  ####  #####  ###  #########  ##  ###  ###  #######  ##  ######");
cout<<endl;
cprintf("###  ######    #####       ####  #########  ##      ####       ##  ###  ####");
cout<<endl;
cprintf("###########################################################################");
cout<<endl;
cprintf("##########################################################################");
cout<<"\n\n";
textcolor(10);
cprintf(" :::::::  ::::::::  ");
textcolor(14);
cprintf("   ||            || ||||||  |||||  ||||     |||||   ");
textcolor(4);
cprintf("***   ");
cout<<endl;
textcolor(10);
cprintf("   ::     ::    ::  ");
textcolor(14);
cprintf("    ||          ||  ||  ||  ||  || ||  || ||   ");
textcolor(4);
cprintf("    *   * ");
cout<<endl;
textcolor(10);
cprintf("   ::     ::    ::  ");
textcolor(14);
cprintf("     ||   ||   ||   ||  ||  |||||  ||  ||   ||||   ");
textcolor(4);
cprintf("   * ");
cout<<endl;
textcolor(10);
cprintf("   ::     ::::::::  ");
textcolor(6);
cprintf("      || |||| ||    ||  ||  ||||   ||  ||      ||   ");
textcolor(4);
cprintf(" *");
cout<<endl;
textcolor(6);
cprintf("                           ||    ||     ||||||  ||  || |||||  |||||   ");
textcolor(4);
cprintf("   *");
cout<<endl<<endl;
textcolor(4);
cprintf("                                                                         @   ");
cout<<endl<<endl;
textcolor(1);
cprintf("##############################################################################");
textcolor(3);
{
nes:
cout<<endl;
cprintf("Enter [y] to << Convert Number into Words.....>>");
cout<<endl;
cprintf("Enter [n] to << Quit..........................>>");
cin>>ch;
if(ch=='y'|| ch=='Y')
goto start;
else if(ch=='n'|| ch=='N')
goto exit;
else
goto mid;
}
{
mid:
clrscr();
cout<<"Wrong entry....please enter y or n";
goto nes;
{
start:
clrscr();
cs:
textcolor(15);
cprintf("***************************************************************************");
cout<<endl<<endl;
cprintf(" PRESS 1 } for Converting Number directly to words. " );
cout<<endl;
cprintf(" PRESS 2 } for Adding 2 Numbers and Converting the result to words. " );
cout<<endl;
cprintf(" PRESS 3 } for Subtracting 2 Numbers and Converting the result to words. " );
cout<<endl;
cprintf(" PRESS 4 } for Multiplying 2 Numbers and Converting the result to words. " );
cout<<endl;
cprintf(" PRESS 5 } for Dividing 2 Numbers and Converting the result to words. " );
cout<<endl;
cprintf(" PRESS 6 } for Finding the Square of the Number and convert the result to words" );
cout<<endl;
cprintf(" PRESS 7 } for Reversing the Number and Converting the result to words. " );
cout<<endl;
cprintf(" PRESS 8 } for Finding the factorial of the Number and Display result to words." );
cout<<endl;
cprintf(" PRESS 9 } for Sum of All Natural Number till the number entered into words." );
cout<<endl;
cprintf(" PRESS 10 } for Displaying the Preceding Odd number of entered number to words.");
cout<<endl;
cprintf(" PRESS 11 } for Displaying the Preceding Even number of entered number to words");
cout<<endl;
cprintf(" PRESS 12 } for Exiting and Going back to home." );
cout<<endl<<endl;
cprintf("***************************************************************************");
cout<<endl<<" ENTER YOUR CHOICE\t";
cin>>ch0;
if(ch0==1)
{
clrscr();
cout<<endl<<"***************************************************************************";
cout<<endl<<"NOTE:  NUMBER SHOULD BE OF 7 DIGITS MAX"<<endl<<"       ONLY INTEGER PART WILL BE CONSIDERED!";
cout<<endl<<"***************************************************************************"<<endl<<endl<<endl<<endl;
textcolor(10);
cprintf("Enter any Number");
cin>>number;
orignum=number;
jack:
if(orignum==0)
{
cout<<endl<<endl<<"THE GIVEN NUMBER IN WORDS IS:-"<<endl;
cout<<"Zero";
goto few;
}
else if(orignum==10 || orignum==11 || orignum==12 || orignum==13 || orignum==14 || orignum==15 || orignum==16 || orignum==17 || orignum==18 || orignum==19)
{
enter(orignum);
goto few;
}
for (i=0;i<8;i++)
{
d[i].name[0]='\0';
d[i].name[1]='\0';
d[i].name[2]='\0';
d[i].name[3]='\0';
d[i].name[4]='\0';
d[i].name[5]='\0';
d[i].name[6]='\0';
d[i].name[7]='\0';
d[i].name[8]='\0';
d[i].name[9]='\0';
d[i].name[10]='\0';
d[i].name[11]='\0';
d[i].name[12]='\0';
d[i].name[13]='\0';
d[i].name[14]='\0';
d[i].name[15]='\0';
d[i].name[16]='\0';
d[i].name[17]='\0';
}
count=0;
digit3=(orignum/100)%10;
digit1=orignum%10;
digit2=(orignum/10)%10;
q=(digit2 * 10)+ digit1;
s=(orignum/10000)%10;
l=(orignum/1000)%10;
e=(s*10)+l;
k=(orignum/100000)%10;
g=(k*100)+(s*10)+l;
while(orignum!=0)
{
digit=orignum%10;
count++;
orignum/=10;
display(digit,count,digit1,q,l,s);
}
if(digit1==0 && digit2==1 && count==3)
{
cout<<endl<<endl;
textcolor(14);
cprintf("THE GIVEN NUMBER IN WORDS IS:-");
cout<<endl;
cout<<d[3].name<<" "<<d[2].name<<" "<<"TEN";
goto few;
}
if(digit1==0 && digit2==1 && (orignum/1000)%10==0)
{
cout<<endl<<endl;
textcolor(14);
cprintf("THE GIVEN NUMBER IN WORDS IS:-");
cout<<endl;
cout<<d[7].name<<" "<<d[6].name<<" "<<d[5].name<<""<<d[4].name<<" THOUSAND "<<d[3].name<<" "<<d[2].name<<" "<<"TEN";
goto few;
}
if(digit1==0 && digit2==1 )
{
cout<<endl<<endl;
textcolor(14);
cprintf("THE GIVEN NUMBER IN WORDS IS:-");
cout<<endl;
cout<<d[7].name<<" "<<d[6].name<<" "<<d[5].name<<" "<<d[4].name<<" "<<d[3].name<<" "<<d[2].name<<" "<<"TEN";
goto few;
}
if(e==10 || e==11 || e==12 || e==13 || e==14 || e==15 || e==16 || e==17 || e==18 || e==19)
{
cout<<endl<<endl;
textcolor(14);
cprintf("THE GIVEN NUMBER IN WORDS IS:-");
cout<<endl;
cout<<d[7].name<<" "<<d[6].name<<" ";
enter(e);
cout<<" THOUSAND "<<d[3].name<<" "<<d[2].name<<" "<<d[1].name;
goto few;
}
if((g==200 || g==300 || g==400 || g==500 || g==600 || g==700 || g==800 || g==900) && ((digit2*10)+digit1==10 || (digit2*10)+digit1==11 || (digit2*10)+digit1==12 || (digit2*10)+digit1==13 || (digit2*10)+digit1==14 || (digit2*10)+digit1==15 || (digit2*10)+digit1==16 || (digit2*10)+digit1==17 ||  (digit2*10)+digit1==18 || (digit2*10)+digit1==19 ) )
{
cout<<endl<<endl;
textcolor(14);
cprintf("THE GIVEN NUMBER IN WORDS IS:-");
cout<<endl;
cout<<d[7].name<<" "<<d[6].name<<" "<<d[5].name<<" THOUSAND "<<d[3].name<<" "<<d[2].name;
goto few;
}
if((g==200 || g==300 || g==400 || g==500 || g==600 || g==700 || g==800 || g==900)   )
{
cout<<endl<<endl;
textcolor(14);
cprintf("THE GIVEN NUMBER IN WORDS IS:-");
cout<<endl;
cout<<d[7].name<<" "<<d[6].name<<" THOUSAND "<<d[4].name<<" "<<d[3].name<<" "<<d[2].name<<" "<<d[1].name;
goto few;
}
if((e==20 || e==30 || e==40 || e==50 || e==60 || e==70 || e==80 || e==90) && ((digit2*10)+digit1==10 || (digit2*10)+digit1==11 || (digit2*10)+digit1==12 || (digit2*10)+digit1==13 || (digit2*10)+digit1==14 || (digit2*10)+digit1==15 || (digit2*10)+digit1==16 || (digit2*10)+digit1==17 ||  (digit2*10)+digit1==18 || (digit2*10)+digit1==19)  )
{
cout<<endl<<endl;
textcolor(14);
cprintf("THE GIVEN NUMBER IN WORDS IS:-");
cout<<endl;
cout<<d[7].name<<" "<<d[6].name<<" "<<d[5].name<<" THOUSAND "<<d[3].name<<" "<<d[2].name<<" "<<d[1].name;
goto few;
}
if((e==20 || e==30 || e==40 || e==50 || e==60 || e==70 || e==80 || e==90) && (q==1 || q==2 || q==3 ||q==4 || q==5 ||q==6 || q==7 || q==8 || q==9) && digit3==0)
{
cout<<endl<<endl;
textcolor(14);
cprintf("THE GIVEN NUMBER IN WORDS IS:-");
cout<<endl;
cout<<d[5].name<<" THOUSAND "<<d[1].name;
goto few;
}
if(e==20 || e==30 || e==40 || e==50 || e==60 || e==70 || e==80 || e==90 )
{
cout<<endl<<endl;
textcolor(14);
cprintf("THE GIVEN NUMBER IN WORDS IS:-");
cout<<endl;
cout<<d[6].name<<" "<<d[5].name<<" THOUSAND "<<d[3].name<<" "<<d[2].name<<" "<<d[1].name;
goto few;
}
if((digit2*10)+digit1==10 || (digit2*10)+digit1==11 || (digit2*10)+digit1==12 || (digit2*10)+digit1==13 || (digit2*10)+digit1==14 || (digit2*10)+digit1==15 || (digit2*10)+digit1==16 || (digit2*10)+digit1==17 ||  (digit2*10)+digit1==18 || (digit2*10)+digit1==19  )
{
cout<<endl<<endl;
textcolor(14);
cprintf("THE GIVEN NUMBER IN WORDS IS:-");
cout<<endl;
cout<<d[7].name<<" "<<d[6].name<<" "<<d[5].name<<" "<<d[4].name<<" "<<d[3].name<<" "<<d[2].name;
goto few;
}
cout<<endl<<endl;
textcolor(14);
cprintf("THE GIVEN NUMBER IN WORDS IS:-");
cout<<endl;
cout<<d[7].name<<" "<<d[6].name<<" "<<d[5].name<<" "<<d[4].name<<" "<<d[3].name<<" "<<d[2].name<<" "<<d[1].name;
few:
cout<<endl<<endl<<endl<<endl;
textcolor(1);
cprintf("PRESS ANY KEY TO CONTINUE");
goto fr;
}
else if(ch0==2)
{
clrscr();
gh:
cout<<endl<<"***************************************************************************";
cout<<endl<<"NOTE: BOTH NUMBERS SHOULD BE OF 6 DIGITS MAX"<<endl<<"       ONLY INTEGER PART WILL BE CONSIDERED!";
cout<<endl<<"***************************************************************************"<<endl<<endl<<endl<<endl;
textcolor(10);
cprintf("ENTER 2 NUMBERS TO ADD");
cout<<endl;
cin>>jk>>fk;
if(fk<1000000 && jk<1000000)
{
sum=jk+fk;
orignum=sum;
cout<<endl<<endl;
textcolor(12);
cprintf("THE SUM IS:");
cout<<sum<<endl;
goto jack;
}
else
{
cout<<" RE-ENTER THE VALUES AS YOU HAVE CROSSED THE LIMITS....."<<endl<<endl;
goto gh;
}
}
else if(ch0==3)
{
clrscr();
gj:
cout<<endl<<"***************************************************************************";
cout<<endl<<"NOTE: BOTH NUMBERS SHOULD BE OF 7 DIGITS MAX"<<endl<<"       ONLY INTEGER PART WILL BE CONSIDERED!";
cout<<endl<<"***************************************************************************"<<endl<<endl<<endl<<endl;
textcolor(10);
cprintf("ENTER 2 NUMBERS TO SUBTRACT");
cout<<endl;
cin>>jk>>fk;
if(fk<10000000 && jk<10000000)
{
sum=jk-fk;
kj=fabs(sum);
orignum=kj;
cout<<endl<<endl;
if(sum<0)
{
textcolor(12);
cprintf("THE DIFFERENCE IS:");
cout<<sum<<endl<<"MINUS ";
}
else
{
textcolor(12);
cprintf("THE DIFFERENCE IS:");
cout<<sum<<endl;
}
goto jack;
}
else
{
cout<<" RE-ENTER THE VALUES AS YOU HAVE CROSSED THE LIMITS....."<<endl<<endl;
goto gj;
}
}
else if(ch0==4)
{
clrscr();
gl:
cout<<endl<<"***************************************************************************";
cout<<endl<<endl<<"NOTE: ONE NUMBER CAN BE 4 DIGITS MAX AND OTHER BE OF 3 DIGITS MAX"<<endl<<"       ONLY INTEGER PART WILL BE CONSIDERED!"<<endl;
cout<<endl<<"***************************************************************************"<<endl<<endl<<endl<<endl;
textcolor(10);
cprintf("ENTER 2 NUMBERS TO MULTIPLY");
cout<<endl;
cin>>jk>>fk;
if((fk<10000 && jk<1000)||(fk<1000 && jk<10000))
{
sum=jk*fk;
orignum=sum;
cout<<endl<<endl;
textcolor(12);
cprintf("THE PRODUCT IS:");
cout<<sum<<endl;
goto jack;
}
else
{
cout<<" RE-ENTER THE VALUES AS YOU HAVE CROSSED THE LIMITS....."<<endl<<endl;
goto gl;
}
}
else if(ch0==5)
{
clrscr();
gc:
cout<<endl<<"***************************************************************************";
cout<<endl<<"NOTE: BOTH NUMBERS SHOULD BE OF 7 DIGITS MAX"<<endl<<"       ONLY INTEGER PART WILL BE CONSIDERED!";
cout<<endl<<"***************************************************************************"<<endl<<endl<<endl<<endl;
textcolor(10);
cprintf("ENTER 2 NUMBERS TO DIVIDE");
cout<<endl;
cin>>jk>>fk;
if(fk<10000000 && jk<10000000)
{
sum=jk/fk;
mod=jk%fk;
orignum=sum;
textcolor(12);
cout<<endl;
cprintf("THE REMAINDER IS:");
cout<<endl<<mod<<endl;
cout<<endl<<endl;
textcolor(9);
cprintf("THE QUOTIENT IS:");
cout<<sum<<endl;
goto jack;
}
else
{
cout<<" RE-ENTER THE VALUES AS YOU HAVE CROSSED THE LIMITS....."<<endl<<endl;
goto gc;
}
}
else if(ch0==6)
{
clrscr();
go:
cout<<endl<<"***************************************************************************";
cout<<endl<<"NOTE: NUMBER SHOULD BE OF UPTO 3000 "<<endl<<"       ONLY INTEGER PART WILL BE CONSIDERED!";
cout<<endl<<"***************************************************************************"<<endl<<endl<<endl<<endl;
textcolor(10);
cprintf("ENTER NUMBER TO FIND SQUARE");
cout<<endl;
cin>>jk;
if(jk<=3000)
{
sum=pow(jk,2);
orignum=sum;
cout<<endl<<endl;
textcolor(12);
cprintf("THE SQUARE IS:");
cout<<sum<<endl;
goto jack;
}
else
{
cout<<" RE-ENTER THE VALUES AS YOU HAVE CROSSED THE LIMITS....."<<endl<<endl;
goto go;
}
}
else if(ch0==7)
{
clrscr();
gm:
cout<<endl<<"***************************************************************************";
cout<<endl<<"NOTE: NUMBER SHOULD BE OF 7 DIGITS MAX"<<endl<<"       ONLY INTEGER PART WILL BE CONSIDERED!";
cout<<endl<<"***************************************************************************"<<endl<<endl<<endl<<endl;
textcolor(10);
cprintf("ENTER A NUMBER TO REVERSE");
cout<<endl;
cin>>jk;
if(jk<10000000)
{
sum=0;
while(jk!=0)
{
dig=jk%10;
sum=(sum*10)+dig;
jk=jk/10;
}
orignum=sum;
cout<<endl<<endl;
textcolor(12);
cprintf("THE REVERSE NUMBER IS:");
cout<<sum<<endl;
goto jack;
}
else
{
cout<<" RE-ENTER THE VALUES AS YOU HAVE CROSSED THE LIMITS....."<<endl<<endl;
goto gm;
}
}
else if(ch0==8)
{
clrscr();
gp:
cout<<endl<<"***************************************************************************";
cout<<endl<<"NOTE: NUMBER SHOULD BE UPTO 10"<<endl<<"       ONLY INTEGER PART WILL BE CONSIDERED!";
cout<<endl<<"***************************************************************************"<<endl<<endl<<endl<<endl;
textcolor(10);
cprintf("ENTER A NUMBER TO FIND FACTORIAL");
cout<<endl;
cin>>jk;
if(jk<=10)
{
sum=1;
for(i=1;i<=jk;i++)
{
sum=sum*i;
}
orignum=sum;
cout<<endl<<endl;
textcolor(12);
cprintf("THE FACTORIAL OF NUMBER IS:");
cout<<sum<<endl;
goto jack;
}
else
{
cout<<" RE-ENTER THE VALUES AS YOU HAVE CROSSED THE LIMITS....."<<endl<<endl;
goto gp;
}
}
else if(ch0==9)
{
clrscr();
gw:
cout<<endl<<"***************************************************************************";
cout<<endl<<"NOTE: NUMBER SHOULD BE UPTO 5"<<endl<<"       ONLY INTEGER PART WILL BE CONSIDERED!";
cout<<endl<<"***************************************************************************"<<endl<<endl<<endl<<endl;
textcolor(10);
cprintf("ENTER A NUMBER TO FIND SUM OF ALL NATURAL NUMBERS UPTO IT");
cout<<endl;
cin>>jk;
if(jk<100000)
{
sum=0;
for(i=1;i<=jk;i++)
{
sum=sum+i;
}
orignum=sum;
cout<<endl<<endl;
textcolor(12);
cprintf("THE SUM OF ALL NATURAL NUMBERS (till the entered NUMBER) IS:");
cout<<sum<<endl;
goto jack;
}
else
{
cout<<" RE-ENTER THE VALUES AS YOU HAVE CROSSED THE LIMITS....."<<endl<<endl;
goto gw;
}
}
else if(ch0==10)
{
clrscr();
gx:
cout<<endl<<"***************************************************************************";
cout<<endl<<"NOTE: NUMBER SHOULD BE 7 Digit MAX"<<endl<<"       ONLY INTEGER PART WILL BE CONSIDERED!";
cout<<endl<<"***************************************************************************"<<endl<<endl<<endl<<endl;
textcolor(10);
cprintf("ENTER A NUMBER TO FIND PRECEDING ODD NUMBER");
cout<<endl;
cin>>jk;
if(jk<=10000000)
{
for(i=1;i<jk;i++)
{
if(i%2!=0)
{
sum=i;
}
}
orignum=sum;
cout<<endl<<endl;
textcolor(12);
cprintf("THE PRECEDING ODD NUMBER IS:");
cout<<sum<<endl;
goto jack;
}
else
{
cout<<" RE-ENTER THE VALUES AS YOU HAVE CROSSED THE LIMITS....."<<endl<<endl;
goto gx;
}
}
else if(ch0==11)
{
clrscr();
gt:
cout<<endl<<"***************************************************************************";
cout<<endl<<"NOTE: NUMBER SHOULD BE 7 Digit MAX"<<endl<<"       ONLY INTEGER PART WILL BE CONSIDERED!";
cout<<endl<<"***************************************************************************"<<endl<<endl<<endl<<endl;
textcolor(10);
cprintf("ENTER A NUMBER TO FIND PRECEDING EVEN NUMBER");
cout<<endl;
cin>>jk;
if(jk<=10000000)
{
for(i=1;i<jk;i++)
{
if(i%2==0)
{
sum=i;
}
}
orignum=sum;
cout<<endl<<endl;
textcolor(12);
cprintf("THE PRECEDING EVEN NUMBER IS:");
cout<<sum<<endl;
goto jack;
}
else
{
cout<<" RE-ENTER THE VALUES AS YOU HAVE CROSSED THE LIMITS....."<<endl<<endl;
goto gt;
}
}
if(ch0==12)
{
goto open;
}
else
{
clrscr();
cout<<endl<<endl<<"WRONG ENTRY....RETYPE YOUR CHOICE..."<<endl;
goto cs;
}
fr:
getche();
{
clrscr();
goto open;
}
exit:
}
}
}
}