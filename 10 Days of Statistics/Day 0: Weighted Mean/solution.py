n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
s = 0
s2 = 0
for i in range(0,n):
        s+= a[i]*b[i]
        s2+= b[i]
print(round(s/s2,1))
