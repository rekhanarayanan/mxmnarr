# include <iostream.h>
#include<conio.h>
int main()
{
 int num{10];
 int small=0;
 int lar=0;
 int temp=0;
 for(int i=0;i<10;i++)
 {
  cout<<"enter the numbers"<<i+1<<":";
  cin>>num[i];
  }
small=num[0];
lar=num[0];
for(int i =1; i<10;i++)
{
 temp=num[i];
 if (temp<small)
 small=temp;
 if(temp>lar)
 lar=temp;
 }
 cout<<"smallest value is "<<small<<endl;
 cout<<"alrgest value is "<<lar<<endl;
 return 0;
 }
 
