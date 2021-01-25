# By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

# What is the 10,001st prime number?


def find_primeNUM():
    count = 6
    i = 15
    j = 3
    result = None

    # breaks when count == 10001
    while True:
        for j in range(3, int(i**0.5) + 1, 2):
            if i % j == 0:
                result = False
                break
            else:
                result = True
                primeNUM = i
                # print(primeNUM)

        if result is True:
            count += 1
            # print(count)

        if count == 10001:
            break
        else:
            i += 2
            continue

    return primeNUM


print(find_primeNUM())
