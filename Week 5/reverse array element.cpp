#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements in the array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n/2; i++){
       int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    cout<<"reversed array:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
