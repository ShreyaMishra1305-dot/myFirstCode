#include<iostream>
using namespace std;
int main(){
    int num1=5 , num2=4 , num3=3;
    if (num1>num2 && num2>num3) cout<<"Number1"<<endl;
    if (num2>num1 || num2>num3) cout<<"Number2"<<endl;
    if (num3>num1 && num3>num2) cout<<"Number3"<<endl;
}