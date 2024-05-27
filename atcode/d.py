import math

t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    min_ones = n

    for i in range(1, n + 1):
        ones_first_i = math.ceil(i / k)
        ones_last_i = math.ceil((n - i + 1) / k)
        min_ones = min(min_ones, ones_first_i + ones_last_i)

    print(min_ones)
