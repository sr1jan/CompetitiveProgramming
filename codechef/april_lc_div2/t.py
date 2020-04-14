from random import randint
t = randint(int(1e5), int(1e6))
print(t)
for _ in range(t):
    print(randint(-int(1e9), int(1e9)), end=' ')

print()
