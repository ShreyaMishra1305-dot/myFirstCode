#include<iostream>
 using namespace std;
 int swap(int x, int y){
    int temp = x;
     x=y;
     y= temp;
     cout<<"x: "<<x<<" y: "<<y;
 }
 int main(){
    int x,y;
    cout<<"Enter any value of x and y : "<<endl;
    cin>>x>>y;
swap(x,y);
 }