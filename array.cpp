#include<bits/stdc++.h>
using namespace std;

int main(){
   // int arr[]={1,2,3,4,5,6,7,8};
    string arr="Rohit";
    for(auto x:arr){
        cout<<x<<" ";
    }
    int i=0;
    //int j=sizeof(arr)/sizeof(arr[0])-1;
    int j=arr.length()-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    cout<<endl<<"After reverse"<<endl;
    for(auto x:arr){
        cout<<x<<" ";
    }
return 0;
}