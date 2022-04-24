#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,n;
    time_t start, end;
    vector<int>v;
    cout<<"Enter the length array :";
    cin>>n;
     for(int i=0;i<=n-1;i++){
        int p;
        p=rand()%n +1;
        v.push_back(p);
       // cout<<p<<" ";
    }
    cout<<endl;
    int k=v.end()-v.begin();
    time(&start);
    for(int i=0;i<=k-1;i++){
        for(int j=0;j<=k-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
    time(&end);
    for(auto x:v){
        cout<<x<<" ";
    }
     

     double time_taken = double(end - start);
    cout << "\nTime taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;
    return 0;
}