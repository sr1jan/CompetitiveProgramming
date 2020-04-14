import time

# time comparison: recur vs iterative vs recur_dp by calculating fibonacci number

def fib_recur(n):
    if n < 2:
        return n

    return fib_recur(n-1) + fib_recur(n-2)

def fib_itr(n):
    fib = [0,1]
    for i in range(2,n+1):
        fib.append(fib[i-1] + fib[i-2])

    return fib[n]

def fib_recur_dp(n, memo):
    if n < 2:
        return n

    if(memo[n] is None):
       memo[n] = fib_recur_dp(n-1, memo) + fib_recur_dp(n-2,memo)

    return memo[n]

def test(fun, n, method='None'):
    if method is 'None': return
    if method is 'fib_recur_dp':
        memo = [None]*(n+1)
        start = time.time()
        ans = fun(n, memo)
        end = time.time()
    else:
        start = time.time()
        ans = fun(n)
        end = time.time()

    print(f'ans:{ans}, time taken by {method}:{end-start}')

if __name__ == '__main__':
    test(fib_recur, 10, 'fib_recur')
    test(fib_itr, 10, 'fib_itr')
    test(fib_recur_dp, 10, 'fib_recur_dp')
