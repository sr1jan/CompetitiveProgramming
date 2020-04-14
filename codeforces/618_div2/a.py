from functools import reduce
t = int(input())

for i in range(t):
    min_s = 0
    n = int(input())

    a = list(map(int, input().split()))
    for i in a:
        if i is 0: min_s += 1

    s = sum(a)
    p = reduce(lambda x,y:x*y, a)

    if s is not 0 and p is not 0:
        print(0)
        continue

    if s+min_s is not 0:
        print(min_s)
    else:
        print(min_s+1)
    # if p is 0 and s is not 0:
    #     if s+min_s is not 0:
    #         print(min_s)
    #         continue
    #     print(min_s+1)



