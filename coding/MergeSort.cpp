#include<bits/stdc++.h>
using namespace std;

int merge(int *arr,int l,int mid,int r){
   int nl=mid-l+1 , nr=r-mid;
    int arrl[nl],arrr[nr];

    for(int i=0;i<nl;i++){
        arrl[i]=arr[l+i];
    }
    for(int j=0;j<nr;j++){
        arrr[j]=arr[mid+1+j];
    }
    int i=0,j=0,k=l;
    
    while(i<nl&&j<nr){
        if(arrl[i]<=arrr[j]){
            arr[k]=arrl[i++];
        }else{
            arr[k]=arrr[j++];
        }
        k++;
    }
    while(i<nl){
        arr[k++]=arrl[i++];
    }
    while(j<nr){
        arr[k++]=arrr[j++];
    }
    return 0;
}


int mergesort(int *arr,int l,int r){
    if(l<r){
        int mid = (l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
    return 0;
}

int main(){
    int arr[]={9,10,7,3,4,6,50,80,1,2};
    int Size=sizeof(arr)/sizeof(int);
    mergesort(arr,0,Size-1);
    for(auto x:arr){
        cout<<x<<endl;
    }
    return 0;
}