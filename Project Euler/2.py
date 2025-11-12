
a = []
a = [1, 2]

while a[-1] + a[-2] <= 4000000:
    a.append(a[-1] + a[-2])

sum = 0;
for i in a:
    if i % 2 == 0:
        sum += i

print(sum)
