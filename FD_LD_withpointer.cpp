#include<iostream>
using namespace std;
void find(int n, int* ptr1, int* ptr2){
    *ptr2= n%10;
    while(n>9){
        n/=10;
    }
    *ptr1=n;
    return;
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int firstdigit, lastdigit;
    int* ptr1=  &firstdigit;
    int* ptr2= &lastdigit;
    find( n , ptr1,ptr2);
    cout<<"First digit: "<<*ptr1<<" last digit : "<<*ptr2; 


}