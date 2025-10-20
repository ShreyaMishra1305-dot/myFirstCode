#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any character or alphabet";
    cin>>ch;
    cout<<ch<<endl;
    //cout<<(int)ch //prints ascii value of entered character
    int ascii = int(ch);
    if((ascii>=65 && ascii<=90) || (ascii>=97 && ascii<=122)) {
    cout<<"The character is alphabet";}
    else 
    cout<<"The chacacter is not an alphabet"<<" "<<ch<<endl;
    
}