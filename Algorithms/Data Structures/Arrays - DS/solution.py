n = int(input())
a = list(map(int, input().split()))
a.reverse()
for i in range(0,n):
    print(a[i],"",end='')
