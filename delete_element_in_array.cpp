#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[100],i,pos,num,item,size;
cout<<"How many elements : ";
cin>>size;
cout<<"\nEnter the elements of an array : ";
for(i=0;i<size;i++)
{
 cin>>a[i];
}
cout<<"Now array is : "<<endl;
for(i=0;i<size;i++)

  cout<<"Element at position "<<i+1<<" is "<<a[i]<<endl;

cout<<"Enter position number to delete : ";
cin>>pos;
--pos;
item=a[pos];
for(i=0;i<size;i++)

  a[i]=a[i+1];

size--;
cout<<"Deleted element "<<item<<endl;
cout<<"New array is"<<endl;
for(i=0;i<size;i++)
  
 cout<<"Element at position "<<i+1<<" is "<<a[i]<<endl;

getch();
}