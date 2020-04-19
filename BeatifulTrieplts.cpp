#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the beautifulTriplets function below.
int beautifulTriplets(int d, vector<int> arr) {
int index = 0,counter=0;
int diff1Counter = 0;

for(int i=0;i<arr.size();i++)
{
    diff1Counter = 0;
    index = arr.at(i);
    for(int j=i+1;j<arr.size();j++)
    {
        if(arr.at(j)-index == d)
        {
            diff1Counter++;
            index = arr.at(j);
        }
        if(diff1Counter ==2)
        {
            counter++;
            break;
        }
    }
   
}
    return counter;
}
