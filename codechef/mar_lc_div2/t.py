import random

# t = random.randint(1, 5)
t = 1;
print(t)
for i in range(t):
    n = random.randint(20000, int(1e5))
    q = random.randint(10000, int(1e5))
    print(n,q,sep=' ')
    for j in range(n):
        print(random.randint(100000000, int(1e9)), end=' ')
    print()
    ql = []
    for j in range(q):
        ql.append([random.randint(1,n+1), random.randint(1,n+1)])
    for k in ql:
        k = sorted(k)
        print(k[0], k[1], random.randint(1, int(1e9)), sep=' ')

# print(int(1e5))
# for i in range(int(1e5)):
#     print(random.randint(int(1e7), int(1e9)), end=' ')

# print()
