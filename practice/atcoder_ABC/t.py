import random
n = random.randint(1,3)
m = random.randint(0,5)
print(n, m, sep=' ')
for i in range(m):
    print(random.randint(1,n), random.randint(0,9), sep=' ')
