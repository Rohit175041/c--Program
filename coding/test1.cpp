#include<bits/stdc++.h>
using namespace std;
int s;
int uns;
   int narraySearch(int *arr,int low,int high,int n,int key){
     if(low<=high){
         int cut[n-1];
         for(int i=0;i<n;i++){
             cut[i-1]=(i*(high-low))/n+low;
         }

         for(int i=0;i<n-1;i++){
             if(arr[cut[i]]==key){
                 s++;
                 return cut[i];
             }
         }

         if(arr[cut[0]]>key){
             return narraySearch(arr,low,cut[0]-1,n,key);
         }

         for(int i=1;i<n-1;i++){
             if(arr[cut[i-1]]<key && arr[cut[i]]>key){
                 return narraySearch(arr,cut[i-1]+1,cut[i]-1,n ,key);
             }
         }
     }   
     uns++;
     cout<<"Successful:"<<s<<" "<<"Unsuccessful:"<<uns<<endl;
    return 0;
   }

int main(){
    int Size,tcase;
    cout<<"Enter the size of array:";
    cin>>Size;
    cout<<"Enter the test case:";
    cin>>tcase;
    
    int arr[Size];

    //Inserting value in array
    for(int i=0;i<Size;i++){
        arr[i]=rand()/Size;
        //cin>>arr[i];
    }

    //sorting given array
    sort(arr,arr+Size);

    
    for(int i=2;i<=Size;i++){
        s=0;
        uns=0;
        //repeating test case 
        for(int j=0;j<tcase;j++){
            int key=rand()%Size;
            narraySearch(arr,0,Size-1,i,key);
        }
    }

    return 0;
}