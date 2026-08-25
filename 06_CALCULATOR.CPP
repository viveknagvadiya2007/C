#include<iostream.h>
#include<conio.h>

void main()
{
	double n1,n2;
	char op;
	clrscr();
	cout<<"Enter First Number : ";
	cin>>n1;
	cout<<"Select an Operator ( +, -, *, /)";
	cin>>op;
	cout<<"Enter Second Number : ";
	cin>>n2;

	switch(op)
	{
		case'+':
			cout<<"Result : "<<n1+n2;
			break;
		case'-':
			cout<<"Result : "<<n1-n2;
			break;
		case'*':
			cout<<"Result : "<<n1*n2;
			break;
		case'/':
		 if(n2!=0)
			cout<<"Result = "<<n1/n2;
		 else
			cout<<"Error: Division by zero is not allowd.";
			break;
		default:
			cout<<"Invalid Operetor.";
	}
	getch();
}

