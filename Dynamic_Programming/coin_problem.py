#!/usr/bin/env python
# -*- coding: utf-8 -*-

def coin(arr, coins ,n):
    for i in range(1, n):
        arr[i] = 100000
        for x in coins:
            if i - x >= 0:
                arr[i] = min(arr[i], arr[i-x] + 1)

n = int(input())
arr = [0]*(n+1)
coins = [1,3,4]
coin(arr, coins ,n)

for k in range(n):
    print arr[k]