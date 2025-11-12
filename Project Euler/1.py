def sum_of_multiples(limit):
    sum = 0
    while limit > 0:
        limit -= 1
        if limit % 3 == 0 or limit % 5 == 0:
            sum += limit

    return sum

print(sum_of_multiples(1000))