#include<iostream.h>
#include<conio.h>

void main()
{
	int year;
	clrscr();

	cout<<"Enter a Year : ";
	cin>>year;

	if(year%4==0)
		cout<<"Leap Year";
	else
		cout<<"Not a Leap Year";
	getch();
}