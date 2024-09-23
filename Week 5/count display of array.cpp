#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements in the array:";
    cin>>n;
    int arr[n];
    int positivecount=0,negativecount=0;
    int oddcount=0,evencount=0;
    cout<<"enter the elements of the array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>0){
            positivecount++;
        }
        else if(arr[i]<0){
            negativecount++;
        }
        if(arr[i]%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }
    cout<<"number of positive numbers: "<<positivecount<<endl;
    cout<<"number of negative numbers: "<<negativecount<<endl;
    cout<<"number of odd numbers: "<<oddcount<<endl;
    cout<<"number of even numbers: "<<evencount<<endl;
    return 0;

}
