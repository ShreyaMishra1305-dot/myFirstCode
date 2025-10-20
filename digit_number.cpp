#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    int count=0;
    if(num==0){
        cout<<"1 digit"<<endl;
    }else {
        if (num<0){
            num = -num;
        }
    while(num!=0){
        num= num/10;
        count++;
    }
}
    cout<<count;

}