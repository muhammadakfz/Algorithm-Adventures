MAXN = 1000000
is_prime = [True] * (MAXN + 1)
is_prime[0] = is_prime[1] = False

# Sieve of Eratosthenes
for i in range(2, int(MAXN**0.5) + 1):
    if is_prime[i]:
        for j in range(i * i, MAXN + 1, i):
            is_prime[j] = False

primes = [i for i, val in enumerate(is_prime) if val]

# DP array
dp = [0] * (MAXN + 1)

# dp[0] = losing position
for n in range(1, MAXN + 1):
    win = False
    for p in primes:
        if p > n:
            break
        if dp[n - p] == 0:
            win = True
            break
    dp[n] = 1 if win else 0

# Output losing positions (where Bob wins)
for n in range(MAXN + 1):
    if dp[n] == 0:
        print(n, end=",")

