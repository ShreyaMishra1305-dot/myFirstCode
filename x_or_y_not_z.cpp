#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the value of first divisor:"<<endl;
    cin>>x;
    int y;
    cout<<"Enter the value of second divisor:"<<endl;
    cin>>y;
    int z;
    cout<<"Enter the value of third divisor:"<<endl;
    cin>>z;
    int  num;
    cout<<"Enter the number which you want to divide:"<<endl;
    cin>>num;
     if((num%x==0 || num%y==0) && (num%z!=0)){
        cout<<"The number " <<num<< " is divisible by "<<x<< " and " <<y<<  " but not "<<z<<endl;
     }
     else if((num%x==0 || num%y==0) && (num%z==0)){
        cout<<"The number"<<num<< " is dividible by "<<z<< "  as well!!";
     }
     else 
     cout<<"The number is not divisible by either "<<x<<"  or  "<<y<<endl;
}