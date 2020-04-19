#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the cavityMap function below.
def cavityMap(grid):
    leftCorner = 0
    rightCorner = 0
    upCorner = 0
    downCorner = 0
    value = 0
    maxV = 0

    for i in range(1,len(grid)-1):
        for j in range(1,len(grid[i])-1):
            leftCorner = grid[i][j-1]
            rightCorner = grid[i][j+1]
            upCorner = grid[i-1][j]
            downCorner = grid[i+1][j]
            value = grid[i][j]
            if (value>leftCorner and value>rightCorner):   
                if value >downCorner and value > upCorner:   
                    print(j)
                    grid[i]=grid[i][0:j] +"X"+grid[i][j+1:]
                
                    print(grid)

    return grid
