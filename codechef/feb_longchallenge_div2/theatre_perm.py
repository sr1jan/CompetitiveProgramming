from itertools import product
from time import time

mov = {'A':0, 'B':1, 'C':2, 'D':3}
show = {12:0, 3:1, 6:2, 9:3}
l = [[0,1,2,3], [0,1,2,3], [25,50,75,100]]

start = time()

perm = list(set(product(*[[r for r in product(*l) if r[0] is 0],[r for r in product(*l) if r[0] is 1],[r for r in product(*l) if r[0] is 2],[r for r in product(*l) if r[0] is 3]])))

score = 0

print(len(perm))

t=int(input())
for i in range(t):
    arr = [[0,0,0,0], [0,0,0,0], [0,0,0,0], [0,0,0,0]]
    n = int(input())
    for j in range(n):
        l = list(map(str, input().strip().split()))
        arr[mov[l[0]]][show[int(l[1])]] += 1



    ans = []
    maxi = [0,[]]
    for p in perm:
        sc = 0
        pen = 0
        shw = [s[1] for s in p]
        pr = [pri[2] for pri in p]

        if len(shw) != len(set(shw)) or len(pr) != len(set(pr)): continue

        # print(p)

        for m_st in p:
            s = arr[m_st[0]][m_st[1]] * m_st[2]
            if s is not 0:
                sc += s
            else:
                pen += 1
        if maxi[0] < sc:
            maxi[0], maxi[1] = sc, p
        ans.append(sc - (100*pen))

    print(max(ans))
    score += max(ans)

print(score)

print(f"time: {time()-start}")
