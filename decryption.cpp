#include <bits/stdc++.h>

using namespace std;


/*
 * Complete the 'decryptPassword' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string decryptPassword(string s) {
 //string t;
 for(int i=0;i<s.length();i++){
     s[i]=s[i]+1;
 }
 return s;
}
int main()
{
  //  ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = decryptPassword(s);

    cout << result << "\n";

   // cout.close();

    return 0;
}
