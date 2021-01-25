def difference(num):

    sum_of_sqr = 0
    sqr_of_sum = 0
    i = 0

    while i <= num:
        sum_of_sqr += i**2
        sqr_of_sum += i

        i += 1

    diff = (sqr_of_sum**2) - (sum_of_sqr)

    return diff


print(difference(100))
