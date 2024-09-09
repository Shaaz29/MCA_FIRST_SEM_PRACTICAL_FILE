#include<iostream>
using namespace std;
 int main()
 {
 	char ch;
 	cout<<"Enter any character:";
 	cin>>ch;
 	 if(ch>=65 && ch<=90)
 	 cout<<endl<<"You Entered a Capital Letter.";
 	  else if(ch>=97 && ch<=122)
 	  cout<<endl<<"You entered a Small case letter.";
 	  else if(ch>=48 && ch<=57)
 	  cout<<endl<<"You Entered a Digit.";
 	  else
 	  cout<<endl<<"You entered a Special Character.";
 	  return 0;
 }
