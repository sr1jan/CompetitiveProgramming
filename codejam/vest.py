t = int(input())
ti = 0
for _ in range(t):
    ti+=1
    n = int(input())
    arr=[[0]*n]*n
    trace=0
    r=c=0
    for i in range(n):
        arr[i] = list(map(int, input().strip().split()))
        row = set(arr[i])
        if(len(row)<n): r+=1
        trace+=arr[i][i]

    for i in range(n):
        col = set()
        for j in range(n):
            col.add(arr[j][i])
        if(len(col)<n): c+=1

    print(f"Case #{ti}: {trace} {r} {c}")


