#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=500;i++){
        int sum= 0;
        int ld;
        int cube;
        int num=i;
        while(ld>0){
            ld=num%10;
          cube=ld*ld*ld;
          sum=sum+cube;
          num=num/10;}
          if(sum==i){
            cout<<i<<endl;          }
        
    }
}