import math
a, b = [int(x) for x in input().split()]
for n in range(0, 7):
    if (3**n)*a > (2**n)*b:
        break
print(n)
