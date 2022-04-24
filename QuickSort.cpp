#include<bits/stdc++.h>
using namespace std;

int partion(int *arr,int start,int end){
    int pivot=arr[start];
    int count=0;
    for(int i=start+1;i<=end;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }

    int pivotIndex=start+count;
    swap(arr[start],arr[pivotIndex]);

    int i=start,j=end;
    while (i<pivotIndex&&j>pivotIndex)
    {
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        	if (i < pivotIndex && j > pivotIndex) {
			swap(arr[i++], arr[j--]);
		}
    }
    return pivotIndex;
}


void QuickSort(int *arr,int start,int end){
    if(start<=end){
    int p=partion(arr,start,end);
    QuickSort(arr,start,p-1);
    QuickSort(arr,p+1,end);
    }
}

int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=rand();
        //cin>>arr[i];
    }
    //QuickSort Algorithm
    QuickSort(arr,0,n-1);
    cout<<endl;
    for(auto x:arr){
        cout<<x<<endl;
    }
    return 0;
}