#!/bin/python3

import os

def get_median(arr):
    if(len(arr) % 2 == 0):
        middle_element = round(len(arr) / 2) - 1
        second_element = middle_element + 1
        median = (arr[middle_element] + arr[second_element]) / 2
    else:
        middle_element = round(len(arr) / 2) - 1
        median = arr[middle_element]

    return float(median)

def get_interquartile(arr, middle_element, second_element = None):
    print('middle ' + str(middle_element))
    if(len(arr) % 2 == 0):
        left = [value for index, value in enumerate(arr) if index >= 0 and index <= middle_element]
        right = [value for index, value in enumerate(arr) if index >= second_element and index <= len(arr) - 1]
    else:
        left = [value for index, value in enumerate(arr) if index >= 0 and index < middle_element]
        right = [value for index, value in enumerate(arr) if index > middle_element and index <= len(arr) - 1]

    print(left)
    print(right)
    q1 = get_median(left)
    q3 = get_median(right)
    res = q3 - q1
    fptr.write(str(res))

def insert_element(lst, element, freq):
    while(freq):
        lst.append(element)
        freq -= 1

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    arr_len = int(input())
    arr = list(map(int, input().rstrip().split()))
    freq = list(map(int, input().rstrip().split()))
    new_set = []

    print(arr)
    print(freq)

    for index in range(arr_len):
        insert_element(new_set, arr[index], freq[index])

    new_set.sort()
    print(new_set)
    print(len(new_set))

    if(len(new_set) % 2 == 0):
        middle_element = round(len(new_set) / 2) - 1
        second_element = middle_element + 1
        get_interquartile(new_set, middle_element, second_element)
    else:
        middle_element = round(len(new_set) / 2) - 1
        get_interquartile(new_set, middle_element)

    fptr.close()
