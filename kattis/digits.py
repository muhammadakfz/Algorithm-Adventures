def f(i, num):
    a = len(str(num))
    next = str(a)

    if (next == num):
        return i
    else:
        return f(i + 1, next)

while True:
    s = input()
    if s == "END":
        break
    print(f(1, s))
