#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int>v = {11,12,34,5,71,32};
//  v.push_back(4);
//  cout<<v[6]<<" ";
//  cout<<v.size()<<endl;
 v[0]=6;
 cout<<v[0]<<" ";
}