# A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
# Find the largest palindrome made from the product of two 3-digit numbers.

# print('100 x 100 - ', 100 * 100) -> 100 x 100 -  10000
# print('999 x 999 - ', 999 * 999) -> 999 x 999 -  998001


def PalindromeChecker(num):
    lnum = list(map(int, str(num)))
    numl = list(reversed(lnum))

    if lnum == numl:
        return True
    else:
        return False


def Largest3D_PN():

    product = 0

    for i in range(999, 899, -1):
        for j in range(999, 899, -1):
            product = i * j
            # print('i - ', i)
            # print('j - ', j)
            if PalindromeChecker(product) is True:
                P_num = product
                print(P_num)
                break
        else:
            continue # only executed if the inner loop did NOT break
        break # only executed if the inner loop DID break


Largest3D_PN()
