
#include <bits/stdc++.h>
#include <chrono>
#include <fstream>
using namespace std;
using namespace std::chrono;
int scases;
int unscases;

int nnarysearch(int arr[], int low, int high, int n, int key)
{
    if(low<=high)
    {
        int cut[n - 1];
        for (int i = 1; i < n; i++)
        {
            cut[i - 1] = (i * (high - low)) / n + low;
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[cut[i]] == key)
            {
                scases++;
                return cut[i];
            }
        }

        if (arr[cut[0]] > key)
        {
            return nnarysearch(arr, low, cut[0]-1, n, key);
        }

        if (arr[cut[n - 2]] < key)
        {
            return nnarysearch(arr, cut[n - 2] + 1, high, n, key);
        }

        for (int i = 1; i < n - 1; i++)
        {
            if (arr[cut[i - 1]] < key && arr[cut[i]] > key)
            {
                return nnarysearch(arr, cut[i - 1] + 1, cut[i] - 1, n, key);
            }
        }
    }
    unscases++;
    return 0;
}

int main()
{
    ofstream fout, fout2,fout3,fout4;
    int N, n, key, sum, m;
    float avg;
    srand(time(0));
     cout<<"Enter the size of array:";
    cin>>N;
    cout<<"Enter the test case:";
    cin>>m;
    int arr[N], s[N-2],uns[N-2];
    float Time[N-2];
    for (int i = 0; i < N; i++)
    {
        arr[i] = rand()%N;
    }
    
    cout<<endl;
    sort(arr,arr+N);
    fout.open("n.txt");
    fout2.open("x.txt");
    fout3.open("successfull.txt");
    fout4.open("unsuccessful.txt");

    for (int i = 2; i <= N; i++)
    {
        sum = 0;
        
        scases=0;
        unscases=0;

        for (int j = 0; j < m; j++)
        {
            key = rand() % N;

            // cout<<key<<endl;
            auto start = high_resolution_clock::now();

            nnarysearch(arr, 0, N - 1, i, key);

            auto stop = high_resolution_clock::now();
            auto duration = duration_cast<nanoseconds>(stop - start);


            sum += duration.count();
            
        }

        avg = float(sum / m);
        
       
        s[i-2]=scases;
        uns[i-2]=unscases;
        Time[i-2]=float(sum);
        fout << avg << endl;
        fout2 << i << endl;
        fout3<<scases<<endl;
        fout4<<unscases<<endl;
    
    }
    for(int k=0;k<=N-2;k++){
        cout<<"S.No:"<<k+1<<"-> Scase: "<<s[k]
        <<"  Unscase: "<<uns[k]
        <<"  Time: "<<Time[k]<<endl;
    }
    fout.close();
    fout2.close();
    fout3.close();
    fout4.close();
    
    return 0;
}