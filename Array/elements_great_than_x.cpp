#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     cout<<"Elements of array array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;


    int x;
    cout<<"Enter the value of x: "<<endl;  
    cin>>x;
    int count=0;
    for(int i=0;i<n;i++){
        if (arr[i]>x){
            count++;
        }
    }
    cout<<count;
}