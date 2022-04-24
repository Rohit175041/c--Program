#include<bits/stdc++.h>
using namespace std;

int main(){
   
   set<int>s={1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4}; 
    // for(int i=0;i<=sizeof(arr)/sizeof(arr[0])-1;i++){
    //     s.insert(arr[i]);
    // }
    s.erase(1);
    auto x=s.find(1);
    if(x==s.end()){
        cout<<"No value"<<endl;
    }else{
        cout<<"Greate Success"<<endl;
    }
    for(auto x:s){
        cout<<x<<endl;
    }
    return 0;
}