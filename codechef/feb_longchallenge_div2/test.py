from random import randint, choice

m = ['A', 'B', 'C', 'D']
t = [12,3,6,9]

c = randint(1,150)
print(c)
for i in range(c):
    n = randint(1,100)
    print(n)
    for j in range(n):
        print(f"{choice(m)} {choice(t)}")



