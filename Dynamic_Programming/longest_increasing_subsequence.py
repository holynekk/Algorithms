#!/usr/bin/env python
# -*- coding: utf-8 -*-

def subs(subsequence, length, n):
    for k in range(n):
        for i in range(k):
            if (subsequence[i] < subsequence[k]):
                length[k] = max(length[k], length[i]+1)


n = int(input())
subsequence = list(map(int, raw_input().split()))

length = [1]*n

subs(subsequence, length, n)
print max(length)

