#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {
    int alpList[26] = {0};
   for(int i=0;i<s.size();i++)
   {
       if(s[i]>64 &&s[i]<91)
       {
           alpList[s[i]-65]++;
       }
    else if(s[i]>96 && s[i]<123)
       {
           alpList[s[i]-97]++;
       }
   }
if (std::find(std::begin(alpList), std::end(alpList), 0) != std::end(alpList))
{
    return "not pangram";
}
return "pangram";
}
