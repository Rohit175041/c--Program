#include<bits/stdc++.h>
using namespace std;
int main(){
    string c;
    getline(cin,c);
    //cin>>c;
    int k=c.length();
    
        if(c[0]!=c[k-1]){
            cout<<"Not Palindrone"<<endl;
        }else{
            cout<<"Palindrone"<<endl;
        }
    cout<<c<<endl;
    cout<<k;
    return 0;
}