#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
  
    int m=n-1;
    int nsp=1;
    for(int y=1;y<=2*n-1;y++){
        cout<<y;
    } cout<<endl;
    for(int i=1 ; i<=m;i++){
          int a=1;
    for(int j=1;j<=n-i;j++){
        cout<<a;
        a++;
    }
    for(int k=1;k<=nsp;k++){
        cout<<" ";
        a++;
    } nsp+=2;
   for(int x=1;x<=n-i;x++){
        cout<<a;
        a++;
    }
        cout<<endl;
    }
}