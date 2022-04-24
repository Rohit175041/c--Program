#include<bits/stdc++.h>
using namespace std;
int main(){
    int j,key,i,k,num,n;
    time_t start, end;
    vector<int>v;
    cout<<"Enter the length array :";
    cin>>n;
     for(int i=0;i<=n-1;i++){
        int p;
        p=rand()%n +1;
        v.push_back(p);
        //cout<<p<<" ";
    }
    cout<<endl;
    k=v.end()-v.begin();
    time(&start);
    for( i=1;i<=k-1;i++){
       key=v[i];
       j=i-1;
        while(j>=0 && v[j]>key){
            v[j+1]=v[j];
            j=j-1;
        }
        v[j+1]=key;
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
