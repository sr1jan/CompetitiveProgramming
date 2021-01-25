# A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
# a^2 + b^2 = c^2

# For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

# There exists exactly one Pythagorean triplet for which a + b + c = 1000.
# Find the product abc.

# Function to calculate product of elements in a list


def prod(iterable):
    p = 1
    for n in iterable:
        p *= n
    return p


def Pythagorean_triplet():

    calc_list = []
    for m in range(2, 10):
        for n in range(1, m):
            for k in range(1, 30):
                a = k * ((m**2) - (n**2))
                b = k * (2 * m * n)
                c = k * ((m**2) + (n**2))
                calc_list.append(a)
                calc_list.append(b)
                calc_list.append(c)
                # print(calc_list)
                if(sum(calc_list) == 1000):
                    product = prod(calc_list)
                    print(calc_list)
                    print(f'Product is equal to {product}')
                    print(f'm is {m}, n is {n}, and k is {k}')
                    break
                else:
                    calc_list.clear()
                    continue
            else:
                continue
            break
        else:
            continue
        break

    return 0


Pythagorean_triplet()
