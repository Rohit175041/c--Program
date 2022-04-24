#include<bits/stdc++.h>
using namespace std;

int main(){
     time_t start, end;
    vector<int>v;
    int n,num;
    cout<<"Enter the length array :";
    cin>>n;

    time(&start);
    for(int i=0;i<=n-1;i++){
        int p;
        p=rand()%n +1;
        v.push_back(p);
        cout<<p<<" ";
    }
    cout<<"\nEnter the number : ";
    cin>>num;
    for(auto x:v){
        if(x==num){
            cout<<"Great success"<<endl;
            break;
        }
    }
    time(&end);

     double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;
  
    return 0;
}