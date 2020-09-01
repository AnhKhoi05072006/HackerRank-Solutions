import numpy as np
from scipy import stats
n = int(input())
a = list(map(int, input().split()))
print(np.mean(a))
print(np.median(a))
print(int(stats.mode(a)[0]))
