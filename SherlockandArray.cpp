#include <bits/stdc++.h>
#include <numeric>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the balancedSums function below.
string balancedSums(vector<int> arr) {
int sumL=0,sumR=0;
if(arr.size()==1)
    return "YES";
sumR=accumulate(arr.begin()+1,arr.end(),0);
cout<<sumR<<endl;
for(int i=1;i<arr.size();i++){

    if(sumR!=sumL)
    {
        sumL += arr[i-1];
        sumR -= arr[i];
    }
    else {
    return "YES";
    }
     
}

return "NO";
