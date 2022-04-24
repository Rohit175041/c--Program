#include<bits/stdc++.h>
using namespace std;

class p{

    public:
    int input(int num,vector<int>&v){
        int x;
        for(int i=0;i<=num-1;i++){
         cin>>x;
         v.push_back(x);
       }
    return 0;
    }

    int Print(vector<int>v){
        for(auto x:v){
            cout<<x<<endl;
        }
    return 0;
    }
    
    int Reverse(vector<int>&v){
        
        reverse(v.begin(),v.end()-1);
        return 0;
    } 
    
    int Sort(vector<int>&v){
        
        sort(v.begin(),v.end());
        return 0;
    } 
};



int main(){
    p k;
    vector<int>v;
    int num;
    cout<<"Enter the number of element: ";
    cin>>num;
    
    k.input(num,v);
    v.pop_back();
    v.push_back(10);
    k.Sort(v);
    k.Reverse(v);
    k.Print(v);

    return 0;
}