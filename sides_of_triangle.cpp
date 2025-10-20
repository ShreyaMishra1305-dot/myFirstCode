#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter sides of triangle "<<endl;
    cout<<"Enter 1st side: "<<endl;
    cin>>a;
    cout<<"Enter 2nd side: "<<endl;
    cin>>b;
    cout<<"Enter 3rd side: "<<endl;
    cin>>c;
    if(a+b>c && b+c>a && a+c>b){
        cout<<a<<" , "<<b<<" and "<<c<<" are the sides of triangle."<<endl;
    }
    else 
    cout<<a<<" , "<<b<<" and "<<c<<" are not sides of triangle."<<endl;
}