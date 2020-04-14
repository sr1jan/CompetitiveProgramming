# utility functions
def ii(): int(input())
def si(): input()
def ili(): list(map(int, input().strip().split()))
def sli(): list(input().strip().split())


if __name__ == '__main__':
    from functools import reduce
    for _ in range(int(input())):

        n = ii()
        arr = list(map(int, input().strip().split()))
        s = reduce(lambda x, y: x+y, arr)
        e, o = 0, 0
        for d in arr:
            if d&1 is 0:
                e += 1
            else:
                o += 1

        if s&1 is 0 and e is 0:
            print('NO')
        elif s&1 is 0 and o is 0:
            print('NO')
        else:
            print('YES')
        # if s&1 is 1:
        #     print('YES')
        # else:
        #     if len(set(arr)) is 1:
        #         print('NO')
        #     else:
        #         res = False
        #         for d in (arr):
        #             if d&1 is 1:
        #                 res = True
        #                 break
        #         if res is True:
        #             print('YES')
        #         else:
        #             print('NO')
