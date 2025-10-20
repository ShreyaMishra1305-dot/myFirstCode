#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    int m=n-1;
    int nsp=1;
    for(int y=1;y<=2*n-1;y++){
        cout<<"*";
    } cout<<endl;
    for(int i=1 ; i<=m;i++){
    for(int j=1;j<=n-i;j++){
        cout<<"*";
    }
    for(int k=1;k<=nsp;k++){
        cout<<" ";
    } nsp+=2;
   for(int x=1;x<=n-i;x++){
        cout<<"*";
    }
        cout<<endl;
    }
}