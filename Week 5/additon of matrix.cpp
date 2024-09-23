#include<iostream>
using namespace std;
int main(){
	int rows,colm;
	cout<<"enter the number of rows:";
	cin>>rows;
	cout<<"enter the number of columns:\n";
	cin>>colm;
	int matrix1[rows][colm],matrix2[rows][colm],sum[rows][colm];
		cout<<"enter elements of the first matrix:\n";
	for(int i=0;i<rows;i++)
	for(int j=0;j<colm;j++){
		cin>>matrix1[i][j];
	}
		cout<<"enter elements of the second matrix:\n";
	for(int i=0;i<rows;i++)
	for(int j=0;j<colm;j++){
		cin>>matrix2[i][j];
	}
	for(int i=0;i<rows;i++){
		for(int j=0;j<colm;j++){
		sum[i][j]=matrix1[i][j]+matrix2[i][j];
		}
	}
	cout<<"\nsum of the matrices:\n";
	for(int i=0;i<rows;++i){
	for(int j=0;j<colm;++j){
		cout<<sum[i][j]<<" ";
	}
	cout<<endl;
	}
	return 0;
}
