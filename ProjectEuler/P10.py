# Sieve of Eratosthenes
def sum_of_primes(num):
    num_list = [0] * num
    sum = 0

    for i in range(2, int(num**0.5) + 1):
        if num_list[i] == 0:
            for j in range(2, num):
                if (i * j) >= num:
                    break
                num_list[i * j] = 1
    for n in range(2, len(num_list)):
        if num_list[n] == 0:
            sum += n
            # print(n)

    return sum

if __name__ == '__main__':
    from sys import argv
    import time

    start = time.time()
    sum = sum_of_primes(int(argv[1]))
    print(f'{sum}\nTime Taken: {time.time()-start}')
