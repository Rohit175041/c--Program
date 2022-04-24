#include<bits/stdc++.h>
using namespace std;

class p{
    public:
    void print(int N,vector<pair<int,string>>*v){
	    for(int i=0;i<=N-1;i++){
          for(auto k:v[i]){
             cout<<k.first<<"->"<<k.second<<":";
          }
        cout<<endl;
        }
    }

    void Input(int N,vector<pair<int,string>>*v){
        for(int i=0;i<=N-1;i++){
           int n;
           cout<<"Enter the size of array:";
           cin>>n;
           for(int j=0;j<=n-1;j++){
             int x;
             string y;
             cin>>x>>y;
             v[i].push_back({x,y});
            }
        }
    }

};



int main(){
    p h;
    int N;
    cout<<"Enter the size of vector:";
    cin>>N;
    vector<pair<int,string>>v[N];
    
    //Imput
    h.Input(N,v);
    //Output
    h.print(N,v);
    
    return 0;
}
