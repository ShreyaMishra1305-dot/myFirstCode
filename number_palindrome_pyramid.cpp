#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of rows: " <<endl;
    cin>> n;

    for(int i = 1;i <= n; i++){
        
        for(int j = 1; j <= n - i; j++){
            cout<< " ";
        }
        for(int m = 1; m <= i; m++){
            cout<<m;
        }
        for(int k = i - 1; k >= 1; k--){
            cout<<k;
        }
        cout<<endl;
    }
}
