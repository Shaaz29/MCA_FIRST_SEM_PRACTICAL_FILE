#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[n];
    cout<<"enter the number of elements in the array:";
    cin>>n;
    cout<<"enter the elements of the array:";
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    cout<<"the sum of all array elements is:"<<sum<<endl;
    return 0;
}