#include<iostream>
#include<time.h>
using namespace std;

int main(){
clock_t t;

int s=5,F[s],NF[s];
float T[s];

for(int a=1;a<=10;a++){
t = clock();
int n=1000*(a);
float to=0;
int fo=0,nf=0,pos=0;

//reteating test case
for(int z=1;z<=10;z++){
int a[n];

//inserting value in array
for(int i=0;i<n;i++){
	a[i]=(rand()%n)+1;
}

//genrating random key to search
int key=rand()%n+1;
bool f=0;

//checking key not found
for(int i=0;i<n;i++){
	if(a[i]==key){
		f=1;
		pos =pos+i;
		fo++;
		break;
	}
}

if(!f){
	nf++;
	}

//running time duration
t = clock() - t;
double time_taken = ((double)t)/CLOCKS_PER_SEC;
to=time_taken+to;
}

//display output
cout<<"Array size :"
<<n<<"\nno. of time Key found :"
<<fo<<"\nno. of time Key not found :"
<<nf<<"\nTime taken is:"
<<to/10<<" seconds\n"<<"Key found at index :"
<<pos/10<<"\n"<<endl;
}
return 0;
}

