#include<bits/stdc++.h>
using namespace std;

class p{
    public:
    
    int Input(vector<pair<int,string>>&v,int num){
        for(int i=0;i<=num-1;i++){
            int x;
            string y;
            cin>>x>>y;
            v.push_back({x,y});
        }
        return 0;
    }

    int Print(vector<pair<int,string>>&v){
        for(auto it:v){
            cout<<it.first<<" : "<<it.second<<" ";
        }
        return 0;
    }

    int Reverse(vector<pair<int,string>>&v){
        reverse(v.begin(),v.end());
        return 0;
    }

    int Insert(vector<pair<int,string>>&v){
         int x;
        string y;
        cin>>x>>y;
        v.push_back({x,y});
        return 0;
    }

};

int main(){
    p k;
    int num;
   // vector<pair<int,string>>v={{1,"Rohit"},{2,"Aniket"}};
   vector<pair<int,string>>v;
    cout<<"Enter the number of element : ";
    cin>>num;
    k.Input(v,num);
    v.pop_back();
    k.Insert(v); 
    k.Reverse(v);
    k.Print(v);
    return 0;
}