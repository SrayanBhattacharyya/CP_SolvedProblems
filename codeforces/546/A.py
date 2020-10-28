k, n, w = [int(x) for x in input().split()]
w = (w**2)/2 + w/2
cost = k*w
if cost > n:
    print(int(cost - n))
else:
    print(0)
