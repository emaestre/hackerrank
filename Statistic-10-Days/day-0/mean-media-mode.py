#!/bin/python3

import os

def get_mean(arr):
    acum = 0
    for element in arr:
        acum += element
    
    acum /= len(arr)

    return round(acum, 1)

def get_median(arr):
    arr.sort()
    middle_element = round(len(arr) / 2 - 1)
    second_element = middle_element + 1
    median = (arr[middle_element] + arr[second_element]) / 2

    return median

def get_mode(lst):
    counter = 0
      
    for i in lst: 
        curr_frequency = lst.count(i) 
        if(curr_frequency > counter): 
            counter = curr_frequency 

    lst_count = [x for x in sorted(lst) if lst.count(x) == counter]

    return lst_count[0]

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    arr_count = int(input())
    arr = list(map(int, input().rstrip().split()))

    fptr.write(str(get_mean(arr)) + '\n')
    fptr.write(str(get_median(arr)) + '\n')
    fptr.write(str(get_mode(arr)))

    fptr.close()
