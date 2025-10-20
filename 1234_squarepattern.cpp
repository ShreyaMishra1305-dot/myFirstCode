#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the number of rows and column: "<<endl;
    cin>>r>>c;
    for(int i=1;i<=r;i++){
         for(int i=1;i<=c;i++){
        cout<<" "<<i;
    } cout<<endl;
    }
}