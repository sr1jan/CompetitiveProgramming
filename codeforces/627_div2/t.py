import random
t = random.randint(1,100)
print(t)
for i in range(t):
    n = random.randint(3,50000)
    print(n)
    for j in range(n):
        print(random.randint(1,n), end=' ')
    print()
