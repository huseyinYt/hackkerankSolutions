#include <bits/stdc++.h>

using namespace std;

// Complete the maximizingXor function below.
int maximizingXor(int l, int r) {
    int maxValue =r;
    int minValue =l;
    int  max=0;
    if(l>=r)
    {
        maxValue =l;
        minValue =r;
    }
   
    for(int i =minValue ; i<=maxValue; i++)
    {
        for( int j = i;j<=maxValue;j++)
        {
            if ( (j^i) > max )
            {
                max = (j^i);
            }
           
               }
    }
   
    return max;


}
