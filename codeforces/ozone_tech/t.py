import random

n = random.randint(2,2*10**5)
print(n, random.randint(1,1000), sep=' ')
for i in range(n):
    print(random.randint(0, 10**9), end=' ')
