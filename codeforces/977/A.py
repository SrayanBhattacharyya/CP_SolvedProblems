n, k = [int(x) for x in input().split()]
for i in range(1, k+1):
    if n % 10 == 0:
        n = int(n/10)
    else:
        n = n - 1
print(n)