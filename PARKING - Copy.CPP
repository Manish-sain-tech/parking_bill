#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
int ch,amount=0,count=0;
clrscr();
while(1)
{
cout<<"enter your choice"<<endl;
cout<<"for parking A Two Wheelar press 1 : "<<endl<<endl;
cout<<"for parking A four Wheelar press 2 : "<<endl<<endl;
cout<<"for parking A BUS press 3 : "<<endl<<endl;
cout<<"for cheack Record Of Money press 4 : "<<endl;
cout<<"for exit press 5 : "<<endl;
cin>>ch;
switch(ch)
{
case 1:
cout<<" Bike is parked"<<endl<<endl;
cout<<"amount charged is 100  rupies"<<endl;
amount=amount+100;
count=count+1;
break;
case 2:
cout<<" Four wheeler is parked"<<endl<<endl;
cout<<"amount charged is 200  rupies"<<endl;
amount=amount+200;
count=count+1;
break;
case 3:
cout<<" BUS is parked"<<endl<<endl;
cout<<"amount charged is 500  rupies"<<endl;
amount=amount+500;
count=count+1;
break;
case 4:
cout<<"total money collected by parking is= "<<amount<<endl<<endl;
cout<<"total vehicle are in parking = "<<count<<endl;
break;
case 5:
exit(0);
default:
cout<<"invalid option choosed"<<endl;
break;
}
}
return 0;
}