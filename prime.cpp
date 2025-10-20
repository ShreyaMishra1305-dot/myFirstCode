#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any number to check it is prime or not: "<<endl;
    cin>>num;
    bool prime = true;
    if( num<=1 ){
        cout<<"Not a prime number "<<endl;
    }
    else{
    for(int i=2;i<num;i++){
        if(num%i==0)
        prime = false;
        break;
    }
}
if(prime){
    cout<<num<<" is a prime number "<<endl;
}
else cout<<"Composite number."<<endl;
    return 0;
}