t = int(input())
for _ in range(t):
    n = int(input())
    print('7'*(n%2) + '1'*(n//2-n%2))
