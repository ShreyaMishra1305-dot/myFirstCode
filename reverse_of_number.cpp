#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number you want to reverse"<<endl;
    cin>>num;
    int lastdigit,r=0;
    if(num==0){
        cout<<"o"<<endl;
    }
    else{
    while(num>0){
        r=r*10;
        lastdigit=num%10;
        r=r+lastdigit;
        num/=10;
       
    }
    }
    cout<<r<<endl;
    

}