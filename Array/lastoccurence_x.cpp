#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5,1,7};
    int x;
    cout<<"Enter the number whose last occurence to be searched: "<<endl;
    cin>>x;
    int idx=-1; //-1 means not found
    // for(int i=0;i<(v.size());i++){
        // if(v[i]==x){
            // idx=i;
        // }
    // }
    for(int i= v.size();i>0;i--){
        if(v[i]==x){
            idx=i;
        }
    }
    cout<<idx;
}