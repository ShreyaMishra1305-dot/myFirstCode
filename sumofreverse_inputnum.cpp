#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    int lastdigit;
    int r=0;
    int original=n;
    while(n>0){
     r=r*10;
     lastdigit=n%10;
     r=r+lastdigit;
     n=n/10;
    } cout<<r<<endl;
    int sum=r+original;
    cout<<"The reverse of "<<original<<" is: "<<r<<" and sum of "<<original<<" and it's reverse is : "<<sum<<endl;
}