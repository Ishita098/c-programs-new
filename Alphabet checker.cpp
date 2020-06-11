
#include<iostream>
#inlcude<conio.h>
void main()
{
	clrscr();
	char ch;
	cout<<"enter a character:";
	cin>>ch;
	if((ch>='a'&& ch<='z') || (ch>='A'&& CH<='Z'))
	{
		cout<<ch<<"is an aplhabet";

	}
	else
	{
		cout<<ch<<"is not alphabet";
	}
	getch();
}
