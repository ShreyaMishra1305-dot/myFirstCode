#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter row and column: "<<endl;
    cin>>r>>c;
    for(int i=0;i<r;i++){
        for(int i=0;i<c;i++){
        cout<<"*";
    }
    cout<<endl;
    }
}