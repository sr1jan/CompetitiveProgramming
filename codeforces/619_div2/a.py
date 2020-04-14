t = int(input())

for _ in range(t):
    a = list(input())
    b = list(input())
    c = list(input())

    ans = True
    for i in range(len(a)):
        if (a[i]==b[i] and c[i]!=a[i]):
            ans = False
            break
        elif c[i] == b[i]:
            a[i]=c[i]
        elif c[i] == a[i]:
            b[i]=c[i]

    if a == b and ans is True:
        print('YES')
    else:
        print('NO')

