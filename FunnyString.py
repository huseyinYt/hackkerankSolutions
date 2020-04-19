#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the funnyString function below.
def funnyString(s):
    sReverse=''.join(reversed(s))
  
    for i in range(len(s)-1):
        diff1 = abs(ord(s[i])-ord(s[i+1]))
        diff2 = abs(ord(sReverse[i])-ord(sReverse[i+1]))
        if(diff1 !=diff2):
            return "Not Funny"


    return "Funny"
