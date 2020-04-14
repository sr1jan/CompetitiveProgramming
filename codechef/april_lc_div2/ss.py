from random import randint
t = randint(1, 1000)
print(t)
for ti in range(t):
    n = randint(1000, 100000)
    print(n)
    for _ in range(n):
        print(randint(-int(1e9), int(1e9)), end=' ')

    print()

