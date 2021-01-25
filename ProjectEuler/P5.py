# 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

# What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

# Execution Time - 12.3s


def SPN_EvenlyDivisible():

    # devisor_list = []
    i = 2520
    while i >= 2520:
        for j in range(20, 1, -1):
            if i % j != 0:
                result = False
                break
            else:
                result = True
                numSPN = i
                # devisor_list.append(j)
                # print(i)
        i += 2520
        if result is True:
            print(numSPN)
            break
        else:
            continue
    # print('Found Nothing!')
    # print(max(devisor_list))


SPN_EvenlyDivisible()
