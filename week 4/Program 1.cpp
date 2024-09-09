#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x;
	cout<<"Please enter your number:";
	cin>>x;
	cout<<"Your Number is:";
	x%2 == 0 ? cout<<"Even" :cout<<"Odd";
	getch();
	return 0;
}
