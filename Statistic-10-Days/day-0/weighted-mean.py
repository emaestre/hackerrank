#!/bin/python3

import os

def get_weighted_mean(values, weights, arr_len):
    acum = 0
    acum_weight = 0

    for index in range(arr_len):
        acum_weight += weights[index]
        acum += values[index] * weights[index]
    
    res = acum / acum_weight

    return round(res, 1)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    arr_len = int(input())
    arr = list(map(int, input().rstrip().split()))
    weights = list(map(int, input().rstrip().split()))

    fptr.write(str(get_weighted_mean(arr, weights, arr_len)))

    fptr.close()
