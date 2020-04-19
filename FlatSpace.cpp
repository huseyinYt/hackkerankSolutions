#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

vector<string> split_string(string);

// Complete the flatlandSpaceStations function below.
int flatlandSpaceStations(int n, vector<int> c) {
vector<int> allList;
int diff = 0;
for(int i=0;i<n;i++)
{
      int mini =100000;

    for(int j=0;j<c.size();j++)
    {
      
      if(abs(i-c[j])<mini)
      {
          mini = abs(i-c[j]);
      }
        
       
    }
        allList.push_back(mini);


}
    diff = *max_element(allList.begin(),allList.end());
return diff;

}
