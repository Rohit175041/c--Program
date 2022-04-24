#include<bits/stdc++.h>
using namespace std;

void print(unordered_map<int,string>&m){
    for(auto x:m){
        cout<<x.first<<"->"<<x.second<<endl;
    }
}

void Input(unordered_map<int,string>&m,int N){
    for(int i=1;i<=N;i++){
        int x;
        string y;
        cin>>x>>y;
        m.insert({x,y});
    }
}

int main(){
    unordered_map<int,string>m;
    int N;
    // m[1]="Ankit";
    // m[4]="Rohit";
    // m[2]="Shurbhi";
    // m.insert({3,"Abhi"});
    // map<int ,string>::iterator x;
    // for(x=m.begin();x!=m.end();++x){
    //     cout<<x->first<<"->"<<(*x).second<<endl;
    // }
    // m.insert({3,"Abhi"});
    cout<<"Enter the number:";
    cin>>N;
    Input(m,N);
    print(m);
    // m.erase(0);
    // m.clear();
    auto it=m.find(7);
    if(it==m.end()){
        cout<<"No value"<<endl;
    }else{
        cout<<it->first<<"->"<<it->second<<endl;
    }
    
    return 0;
}