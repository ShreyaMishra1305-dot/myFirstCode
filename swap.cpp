#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a and b: "<<endl;
    cin>>a>>b;
    cout<<" value of a : "<<a<<" and b: "<<b<<endl;
    a=a+b;// if a= 3 and b= 5 a+b=7 now a=7
    b=a-b;//b=7-5=3 now b=3
    a=a-b;// a=7-3=5
    cout<<"current value of a : "<<a<<" and b: "<<b<<endl;

}
