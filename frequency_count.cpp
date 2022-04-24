#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,4,6,5,4,7,8,6,5,4,3,2,6,5,4,9,8,7,6,5,1,3,4,5,6,3,1,3,8,9,8,7,5,6,7,8,9,3,4,6,4,5};
    map<int ,int>m;
    for(int i=0;i<=sizeof(arr)/sizeof(arr[0])-1;i++){
        m[arr[i]]++;
    }
    for(auto x:m){
        cout<<x.first<<"->"<<x.second<<endl;
    }
    return 0;
}