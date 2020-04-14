import random
t = random.randint(1, 100)
print(t)
for _ in range(t):
    n = random.randint(2, 100)
    print(n)
    for i in range(n):
        l=[random.randint(1,n) for ii in range(n)]
        print(*l)
