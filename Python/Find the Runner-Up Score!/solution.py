n = int(input())
a = map(int, input().split())
print(sorted(list(set(a)))[-2])
