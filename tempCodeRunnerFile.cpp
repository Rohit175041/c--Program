#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={4,6,3,2,8,7,5,1,9};
    int k=sizeof(v)/sizeof(int);
    for(int i=0;i<=k-1;i++){
        for(int j=0;j<=k-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
    for(auto x:v){
        cout<<x<<" ";
    }
    return 0;
}