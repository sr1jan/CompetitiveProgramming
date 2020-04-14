# Tail recursion
def factTR(n, a):
    if n == 0:
        return a

    return factTR(n-1, n*a)

def fact(n):
    return factTR(n,1)

if __name__ == '__main__':
    import time
    n = int(input())
    s = time.time()
    ans = fact(n)
    print(f"ans:{ans}, time_take:{time.time()-s}")
