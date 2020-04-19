#!/bin/python3

import math
import os
import random
import re
import sys
from collections import Counter
# Complete the beautifulPairs function below.
def beautifulPairs(A, B):
    countA = Counter(A)
    countB = Counter(B)

    countDiff = sum((countA-countB).values())
    print((countA-countB).values())
    print(countA-countB)
    if countDiff:
        return(len(A)-countDiff+1)
    else:
        return len(A)-1
