#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
   } cout<<endl;
}
int main(){
    vector<int>v;
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
   
    int i=0;
    int j=v.size()-1;
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;        
    }

    display(v);
   
}