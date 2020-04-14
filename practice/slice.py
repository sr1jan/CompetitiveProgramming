# 17 4
# 2 5 6 8


def pizza_combination(max_slices, slices):
    sum_of_slices = sum(slices)
    diff = sum_of_slices - max_slices
    print(slices, diff)
    # sl = slices.sort()
    # print(sl)reverse=True



if __name__ == '__main__':
    arr = []
    with open('c_medium.in', 'r') as fp:
        for l in fp:
            num = [int(i) for i in l.split()]
            arr.append(num)

    pizza_combination(arr[0][0], arr[1])

