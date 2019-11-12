#!/bin/python3

import os
import math

def get_mean(arr):
    acum = 0
    for element in arr:
        acum += element
    
    acum /= len(arr)

    return round(acum, 1)

def get_standard_deviation(arr, arr_len):
    acum = 0
    mean = get_mean(arr)

    for element in arr:
        acum += (element - mean) ** 2
    
    acum /= len(arr)

    std_deviation = math.sqrt(acum)

    return float(round(std_deviation, 1))

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    arr_len = int(input())
    arr = list(map(int, input().rstrip().split()))
    res = get_standard_deviation(arr, arr_len)
    fptr.write(str(res))
    fptr.close()
