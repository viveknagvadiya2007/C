#include<iostream.h>
#include<conio.h>

void main()
{
	int a,b;
	clrscr();
	cout<<"Enter value for A : ";
	cin>>a;
	cout<<"Enter value for B : ";
	cin>>b;

	if(a>b)
		cout<<a<<" : is the maximum number.";
	else if(b>a)
		cout<<b<<" : is the maximum number.";
	else
		cout<<"Both numbers are equl.";
	getch();
}
