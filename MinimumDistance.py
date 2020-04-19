#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the minimumDistances function below.
def minimumDistances(a):
    diff=0;
    diffList = []
    for i in range(len(a)):
        diff = a[i]
        for j in range(i+1,len(a)):
           if(diff == a[j]):
            diff =abs(i-j)
            diffList.append(diff)
            print(diff)
    if(len(diffList)==0):
        return -1

    return min(diffList)
