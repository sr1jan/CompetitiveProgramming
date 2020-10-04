import random

t = random.randint(9,10)
print(t)
for i in range(t):
    n = random.randint(1e4, 1e5)
    print(n)
    for j in range(n):
        print(random.randint(1e8, 1e9), end=' ')
    print()
