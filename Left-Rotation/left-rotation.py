#!/bin/python3

import math
import os
import random
import re
import sys
from collections import deque

if __name__ == '__main__':
    nd = input().split()
    n = int(nd[0])
    d = int(nd[1])
    a = list(map(int, input().rstrip().split()))
    queue = deque(a)
    d *= -1
    queue.rotate(d)

    for element in queue:
        print(element, end = " ")
