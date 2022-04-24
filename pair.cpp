#include<bits/stdc++.h>
using namespace std;

int main(){
    //  pair<int,string>p;

    // p=make_pair(1,"Rohit");
    // p={2,"Bob"};

    // pair<int,string>p1=p;
    // p1.first=4;
    // cout<<p.first<<" : "<<p.second<<endl;


    //    cin>>p.first>>p.second;
    //    cout<<p.first<<" : "<<p.second<<endl;

    int arr1[]={1,2,3};
    string arr2[]={"Rohit","Bob","Piter"};
    pair<int,string>p[3];

    for(int i=0;i<3;i++){
        p[i]={arr1[i],arr2[i]};
    }

    for(int j=0;j<3;j++){
    cout<<p[j].first<<" : "<<p[j].second<<endl;
    }
    
    swap(p[0],p[2]);
    cout<<"After swapping"<<endl;

    for(int j=0;j<3;j++){
    cout<<p[j].first<<" : "<<p[j].second<<endl;
    }
    return 0;
}