#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    cout<<"Enter the element to search: "<<endl;
    cin>>num;
    for(int i=0;i<n;i++){   
        if(num==arr[i]){
            cout<<"Element found "<<num<<" at "<<i+1<<" place."<<endl;
        }
        else cout<<"not present!"<<endl;
    }

}