for i in range(int(input())):

    n = int(input())
    num = input()

    ans = []
    for j in range(n):
        if(int(num[j])&1 is 1): ans.append(num[j])

    if len(ans) < 2: print(-1)
    else: print(f"{ans[0]}{ans[1]}")
