#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int maxStrSize(vector<string> a)
{
    vector<int> retVal;
    for(int i=0;i<a.size();i++)
    {
        retVal.push_back(a.at(i).size());
    }
    return *max_element(retVal.begin(),retVal.end());
}
// Complete the bigSorting function below.
vector<string> bigSorting(vector<string> unsorted) {
int strSize = maxStrSize(unsorted);

vector<vector<string>> myStringList;
myStringList.resize(strSize+1);

vector<string> retVal;


int prevSize=0;
for(int i = 0;i<unsorted.size();i++)
{
   myStringList.at(unsorted.at(i).size()).push_back(unsorted.at(i));
}

for(int i=0;i<myStringList.size();i++)
{
    sort(myStringList.at(i).begin(),myStringList.at(i).end());
    retVal.insert(retVal.end(),myStringList.at(i).begin(),myStringList.at(i).end());
}

return retVal;

}
