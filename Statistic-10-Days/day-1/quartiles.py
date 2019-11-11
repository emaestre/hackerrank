#!/bin/python3

import os

def get_median(arr):
    middle_element = round(len(arr) / 2 - 1)

    if(len(arr) % 2 == 0):
        second_element = middle_element + 1
        median = (arr[middle_element] + arr[second_element]) / 2
    else:
        median = arr[middle_element]

    return round(median)

def get_quartiles(arr, middle_element, second_element):
    if(len(arr) % 2 == 0):
        left = [value for index, value in enumerate(arr) if index >= 0 and index <= middle_element]
        right = [value for index, value in enumerate(arr) if index >= second_element and index <= len(arr) - 1]
    else:
        left = [value for index, value in enumerate(arr) if index >= 0 and index < middle_element]
        right = [value for index, value in enumerate(arr) if index > middle_element and index <= len(arr) - 1]

    fptr.write(str(get_median(left)) + '\n')
    fptr.write(str(get_median(arr)) + '\n')
    fptr.write(str(get_median(right)))

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    arr_count = int(input())
    arr = list(map(int, input().rstrip().split()))
    arr.sort()
    middle_element = round(len(arr) / 2 - 1)
    second_element = middle_element + 1

    get_quartiles(arr, middle_element, second_element)

    fptr.close()
