#include<iostream.h>
#include<conio.h>

void main()
{
	int a,b,temp;
	clrscr();
	cout<<"Enter Value For A : ";
	cin>>a;
	cout<<"Enter Value For B : ";
	cin>>b;
	cout<<"\n Before Swipping : "<<"A = "<<a<<"\t B = "<<b;

	temp=a;
	a=b;
	b=temp;

	cout<<"\n After Swipping : "<<"A = "<<a<<"\t B = "<<b;
	getch();
}
