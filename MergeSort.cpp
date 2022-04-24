#include<bits/stdc++.h>
using namespace std;

void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}

int merge(int *arr,int l,int mid,int r){
    int nl = mid-l+1, nr = r-mid;
    int arr1[nl],arr2[nr];

    for(int i=0;i<nl;i++){
        arr1[i]=arr[l+i];
    }
    for(int j=0;j<nr;j++){
        arr2[j]=arr[mid+1+j];
    }

    int i=0,j=0,k=l;
    while(i<nl&&j<nr){
        if(arr1[i]<=arr2[j]){
            arr[k]=arr1[i++];
        }else{
            arr[k]=arr2[j++];
        }
        k++;
    }

    while(i<nl){
        arr[k++]=arr1[i++];
    }
    while(j<nr){
        arr[k]=arr2[j++];
    }
    return 0;
} 

int MergeAlgorith(int *arr,int i,int j){
    //int mid;
    if(i<j){
        int mid = i+(j-i)/2;
        MergeAlgorith(arr,i,mid);
        MergeAlgorith(arr,mid+1,j);
        merge(arr,i,mid,j);
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
      // cin>>arr[i];
        arr[i]=rand();
    }
    display(arr,n);
    MergeAlgorith(arr,0,n-1);
    display(arr,n);
    return 0;
}