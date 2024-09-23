#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements in the array:";
    cin>>n;
    int arr[n];
    cout<<"enter elements of the array: "<<endl;
    for(int i=0; i<n;i++){
        cout<<"element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"the elements in the array are: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
