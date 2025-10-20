#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any character or alphabet";
    cin>>ch;
    cout<<ch<<endl;
    int ascii = int(ch);
    if((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90)){
   if( ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'){
    cout<<"The character is lowercase vowel"<<endl;
   }
    else if( ch=='A'|| ch=='E'||ch=='I'||ch=='O'||ch=='U'){
    cout<<"The character is uppercase vowel"<<endl;
   }
   else {
    cout<<"The character is not vowel"<<endl;
   }
    }
    else 
    cout<<"The character is not an alphabet";

}