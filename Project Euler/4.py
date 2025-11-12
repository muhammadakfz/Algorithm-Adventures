def largest_palindrome_product(digits):
    x = 0
    max_limit = 10**digits
    min_limit = 10**(digits - 1)
    for i in range(max_limit - 1, min_limit - 1, -1):
        for j in range(i, min_limit - 1, -1):
            product = i*j
            if str(product) == str(product)[::-1]:
                x = max(x, product)
    return x

print(largest_palindrome_product(2))
