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
    int max= arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max = arr[i];      }
        
    } cout<<max<<endl;
 int smax=INT_MIN;
   for(int i=0;i<n;i++){
        if( arr[i]!=max && smax<arr[i]){
            smax = arr[i];      }
        
    } cout<<smax;

}