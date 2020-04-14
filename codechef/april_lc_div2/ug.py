from math import gcd
for _ in range(int(input())):
    if(_==0): continue
    num = list(map(int, input().split()))[1:]
    for i in range(len(num)-1):
        for j in range(i+1,len(num)):
            if(gcd(num[i], num[j])!=1):
                print(_, num[i], num[j])
