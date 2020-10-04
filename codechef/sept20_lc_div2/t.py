import random

t = random.randint(1, 1e2)
print(t)
for i in range(t):
    n = random.randint(3, 3)
    print(n)
    for j in range(n):
        print(random.randint(0,5), end=' ')
    print()

