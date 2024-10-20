a = []
for _ in range(int(input())):
    s = input()
    if s == "insert":
        a.insert(int(input()), int(input()))
    elif s == "print":
        print(a)
    elif s == "remove":
        a.remove(int(input()))
    elif s == "append":
        a.append(int(input()))
    elif s == "sort":
        a.sort()
    elif s == "pop":
        a.pop()
    elif s == "reverse":
        a.reverse()