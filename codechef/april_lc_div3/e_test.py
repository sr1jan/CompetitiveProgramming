from random import randint
T = 5

print(T)
for k in range(T):
    M = randint(1, 1e1)
    N = randint(1, M)
    K = randint(0, M*N)
    print(N, M, K)
    for i in range(int(N)):
        for j in range(int(M)):
            print(i+j, end=' ')
        print()


