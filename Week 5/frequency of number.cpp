#include<iostream>
using namespace std;
#include<vector>
int main(){
	int n,searchnumber,count=0;
	cout<<"enter the number of elements in the list:";
	cin>>n;
	vector<int>numbers(n);
	cout<<"enter the elements of the list: ";
	for(int i=0;i<n;++i){
		cin>>numbers[i];
	}
	cout<<"enter the number to find its frequency: ";
	cin>>searchnumber;
	for(int i=0;i<n;++i){
		if(numbers[i]==searchnumber){
			++count;
		}
	}
	cout<<"the frequency of "<<searchnumber <<"is:"<<count<<endl;
	return 0;
	
}
