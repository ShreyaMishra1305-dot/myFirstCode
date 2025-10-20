#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=2;i<=x;i++){
        f*=i;
    } return f;
}
int combination(int n, int r){
    int nCr =  fact(n)/(fact(r)*fact(n-r));
    return nCr;
}
int permutation ( int n, int r){
    int nPr = fact(n)/fact(n-r);
    return nPr;
}
int main(){
   int n,r;
   cout<<"Enter n: "<<endl;
   cin>>n;
   cout<<"Enter r: "<<endl;
   cin>>r;
cout<<combination(n,r)<<endl;
cout<<permutation(n,r);
}