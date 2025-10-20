#include<iostream>
using namespace std;
int main(){
    int base, power;
    cout<<"Enter base and power: "<<endl;
    cin>>base>>power;
    int result=1;
    for(int i = 1;i<=power;i++){
        result = result*base;
    } 
    cout<<result;
}