#include <bits/stdc++.h>

#include <chrono>
using namespace std;
using namespace std::chrono;




int linearsearch(vector<int> &arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return key;
            break;
        }
    }
    return -1;
}

int main(){
    int n, r;
    cout<<"Enter the size of array:";
    cin >> n;
    srand(time(0));
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        int x = rand() % n + 1;
        a.push_back(x);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }

    


    r= rand()%n;
       
    auto start = high_resolution_clock::now();

    
   linearsearch(a, n, r);

    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<nanoseconds>(stop - start);

    cout << "Time taken by function: "
         << duration.count() << " nanoseconds" << endl;
   
    // duration<double>total=duration_cast<duration<double>>(stop-start);

// cout<<total.count();

    return 0;
}