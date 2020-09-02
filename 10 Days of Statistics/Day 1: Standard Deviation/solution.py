from math import sqrt
n = int(input())
a = list(map(int, input().split()))
avg = sum(a)/n
s = 0
for i in range(0,n):
    s+= (a[i]-avg)**2
ans = sqrt(s/n)
print(round(ans,1))
