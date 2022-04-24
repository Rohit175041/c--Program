#include<bits/stdc++.h>
using namespace std;

//Bubble sort algorithm
int BubbleSort(int *arr,int size1 ){
for(int j=0;j<size1;j++){
    for(int i=0;i<size1-1;i++){
        if(arr[i]>arr[i+1])
            swap(arr[i+1],arr[i]);
    }
}
return 0;
}

//Selection sort algorithm
int SelectionSort(int *arr,int size1){
for(int i=0;i<size1;i++){
    int minEle=i;
    for(int j=i+1;j<size1;j++){
        if(arr[minEle]>arr[j]){
            minEle=j;
        }
    }
  swap(arr[minEle],arr[i]);
}
return 0;
}

//Insertion Sort algorithm
int InsertionSort(int *arr,int size1){

for(int i=0;i<size1;i++){
   int key=arr[i];
   int j=i-1;
   while(j>=0 && arr[j]>key){
    arr[j+1]=arr[j];
    j--;
   }
   arr[j+1]=key;
}

return 0;
}

//Linear Search algorithm
int LinearSearch(int *arr,int size1,int key){

for(int i=0;i<=size1-1;i++){
    if(arr[i]==key){
        cout<<"Data found"<<endl;
        return 0;
    }
}
cout<<"Data not found"<<endl;
return 0;
}

//Binary Search algorithm
int BinarySearch(int *arr,int size1, int key){

int i=0;
int j=size1-1;

while(i<=j){
    int mid=(i+j)/2;
if(arr[mid]==key){
    cout<<"Data found"<<endl;
    return 0;
}else if(arr[mid]<key){
    i=mid+1;
}else{
    j=mid-1;
}
}
cout<<"Data not found"<<endl;
return 0;
}


//Printing array element
int Print(int *arr,int size1){
for(int i=0;i<=size1-1;i++)
    cout<<arr[i]<<endl;
return 0;
}

//Merging array
int Merge(int *arr,int big,int mid,int l){
int n1=mid-big+1;
int n2=l-mid;

//Temp array
int a[n1];
int b[n2];

for(int i=0;i<n1;i++){
    a[i]=arr[big+i];
}

for(int i=0;i<n2;i++){
    b[i]=arr[mid+i+1];
}

int i=0;
int j=0;
int k=big;

while(i<n1&&j<n2){
    if(a[i]<=b[j]){
        arr[k]=a[i++];
    }
    else
    {
      arr[k]=b[j++];
    }
    k++;
}

while(i<n1){
    arr[k++]=a[i++];
}

while(j<n2){
    arr[k++]=b[j++];
}
return 0;
}

//MergeSort
int MergeSort(int *arr,int big,int l){
if(big>=l){
    return 0;
}
int mid=(big+l)/2;

MergeSort(arr,big,mid);
MergeSort(arr,mid+1,l);

Merge(arr,big,mid,l);

return 0;
}


//Pivot element
int Partition(int *arr,int l, int r){
int pivot=arr[r];
int i=l-1;

for(int j=l;j<=r-1;j++){
    if(arr[j]<=pivot){
        i++;
        swap(arr[i],arr[j]);
    }
}
 swap(arr[i+1],arr[r]);

return i+1;
}

//QuickSort
int QuickSort(int *arr,int l,int r){
    int pi;
if(l<r){
     pi=Partition(arr,l,r);
    QuickSort(arr,l,pi-1);
    QuickSort(arr,pi+1,r);
}

return 0;
}

int main(){
int arr[10];

//Size of array
int size1=sizeof(arr)/sizeof(int);

//Entering random number in array
for(int i=0;i<=size1-1;i++){
   arr[i]= rand();
   //cin>>arr[i];
}
cout<<endl;

//Sorting array

//BubbleSort(arr,size1);
//SelectionSort(arr,size1);
//InsertionSort(arr,size1);
//MergeSort(arr,0,size1-1);
QuickSort(arr,0,size1-1);

//Searching Algorithms

//LinearSearch(arr,size1,10);
//BinarySearch(arr,size1,10);

//Printing array element
Print(arr,size1);

return 0;
}

