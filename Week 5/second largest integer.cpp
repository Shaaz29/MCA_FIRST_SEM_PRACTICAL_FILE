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
    int largest=arr[0];
    int secondlargest=-1;
    for(int i=1; i<n; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]>secondlargest && arr[i]<largest){
            secondlargest=arr[i];
        }
    }
        cout<<"the second largest element is:"<<secondlargest<<endl;
    return 0;
}
