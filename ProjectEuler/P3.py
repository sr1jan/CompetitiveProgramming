import time

# Execution time:  0.10057973861694336
def maxPrimeFactor(num):

    for i in range(3, int(num**0.5), 2):
        while num % i == 0:
            maxPrime = i
            num /= i
            # print(maxPrime)

    return int(maxPrime)

start = time.time()
print(maxPrimeFactor(600851475143))
print('Execution time: ', time.time() - start)


# Execution time:  0.0027618408203125
def prime_factors(n):
    """Returns all the prime factors of a positive integer"""
    factors = []
    d = 2
    while n > 1:
        while n % d == 0:
            factors.append(d)
            n /= d
        d = d + 1

    return factors

start = time.time()
pfs = prime_factors(600851475143)
print(max(pfs))  # The largest element in the prime factor list
print('Execution time: ', time.time() - start)


# Execution time:  0.0009686946868896484
def prime_factors(n):
    """Returns all the prime factors of a positive integer"""
    factors = []
    d = 2
    while n > 1:
        while n % d == 0:
            factors.append(d)
            n /= d
        d = d + 1
        if d * d > n:
            if n > 1:
                factors.append(n)
            break
    return factors

start = time.time()
pfs = prime_factors(600851475143)
print(max(pfs))  # The largest element in the prime factor list
print('Execution time: ', time.time() - start)


# Execution time:  0.10892796516418457
A function to find largest prime factor
def maxPrimeFactors(n):

    # Initialize the maximum prime factor
    # variable with the lowest one
    maxPrime = -1

    # Print the number of 2s that divide n
    while n % 2 == 0:
        maxPrime = 2
        n >>= 1  # equivalent to n /= 2

    # n must be odd at this point,
    # thus skip the even numbers and
    # iterate only for odd integers
    for i in range(3, int(n**0.5) + 1, 2):
        while n % i == 0:
            maxPrime = i
            n = n / i

    # This condition is to handle the
    # case when n is a prime number
    # greater than 2
    if n > 2:
        maxPrime = n

    return int(maxPrime)

# Driver code to test above function
start = time.time()
print(maxPrimeFactors(600851475143))
print('Execution time: ', time.time() - start)
