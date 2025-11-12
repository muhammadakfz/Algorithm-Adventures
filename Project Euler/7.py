def sieve(limit):
    prime = [True] * (limit + 1)
    prime[0] = prime[1] = False
    p = 2
    while p * p <= limit:
        if prime[p]:
            for i in range(p * p, limit + 1, p):
                prime[i] = False
        p += 1

    return [x for x in range(limit + 1) if prime[x]]

primes = sieve(200000)

n = int(input()) - 1
print(primes[n])
