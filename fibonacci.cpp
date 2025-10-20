#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the  number: "<<endl;
    cin>>n;
    int sum=0;
    int a=1, b=1;
    if(n==1||n==2){
        cout<<1;
    }
    else{
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
}
  cout<<sum;
}