#include <bits/stdc++.h>

using namespace std;

// Complete the weightedUniformStrings function below.
vector<string> weightedUniformStrings(string s, vector<int> queries) {
vector<int> List;
vector<string> retVal;
int counter=0;
char prevC;

// fill with all possibilities
for (int i=0;i<s.size();i++)
{
    if(s[i] == prevC)
    {
    counter = counter + (s[i]-96);
    List.push_back(counter);
    }
    else
    {
        List.push_back(s[i]-96);
        counter = s[i]-96;
    }
    prevC = s[i];
}
    for(int i=0;i<queries.size();i++)
    {
    if (std::find(std::begin(List), std::end(List), queries.at(i)) != std::end(List))
    {
        retVal.push_back("Yes");
    }
    else
    {
        retVal.push_back("No");

    }
}
    return retVal;
}
