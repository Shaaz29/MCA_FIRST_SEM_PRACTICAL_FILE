#include<iostream>
using namespace std;
int main(){
    int a[5][5],b[5][5],c[5][5],m,n,p,q,i,j,k;
    cout<<"enter rows and columns of first matrix:";
    cin>>m>>n;
    cout<<"enter rows and columns of second matrix:";
    cin>>p>>q;
    if(n==p){
        cout<<"enter first matrix:\n";
        for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        cin>>a[i][j];
         cout<<"enter second matrix:\n";
        for(i=0;i<p;i++)
        for(j=0;j<q;j++)
        cin>>b[i][j];
        cout<<"the new matrix is:\n";
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                c[i][j]=0;
                for(k=0;k<n;k++)
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
                cout<<c[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
    else
    cout<<"sorry!!!matrix multliplication cant be done";
    return 0;
}