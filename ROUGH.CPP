#include<iostream.h>
#include<conio.h>
void transpose(int[50][50],int m,int n);
void main()
{
clrscr();
int i,j,a[50][50],m,n;
cout<<"Enter the number of rows and columns for the matrix ";
cin>>m>>n;
cout<<"Enter the elements of the array";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cin>>a[i][j];
}
cout<<endl;
}
cout<<"Matrix \n";
for(i=0;i<m;i++)
 {
for(j=0;j<n;j++)
cout<<a[i][j]<<" ";
cout<<endl;
}
transpose(a,m,n);
getche();
}
void transpose(int a[50][50],int m,int n)
{
int i,j,temp=0;
for(i=0;i<m;i++)
{
for(j=i;j<n;j++)
{
temp=a[i][j];
a[i][j]=a[j][i];
a[j][i]=temp;
}
}
cout<<"\nTransposed matrix: \n";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
cout<<a[i][j]<<" ";
cout<<endl;
}
}
