#include<iostream>
using namespace std;

int main()
{
	int upto,i,j,k;
	cout<<"The prime numbers upto-";
	cin>>upto;
	cout<<"The prime numbers between 1 and "<<upto<<"are:"<<endl;
	
	for(i=1;i<=upto;i++)
	{
		if(i==1||i==0)
		{
			continue;
		}
		k=1;
		 for(j=2;j<=i;j++)
		 {
		 	if(i%j==0){
		 		k=0;
		 		break;
			 }
		 }
		 if(k==1)
		 {
		 	cout<<" "<<i;
		 }
		 }
		 return 0;
}

