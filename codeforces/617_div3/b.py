# utility functions
def ii(): int(input())
def si(): input()
def ili(): list(map(int, input().strip().split()))
def sli(): list(input().strip().split())


if __name__ == '__main__':
    for _ in range(int(input())):

        s = int(input())
        if s < 10:
            print(s)
        elif s is 10:
            print(11)
        else:
            spnd=0
            bt = 0
            while (s>=10):
                bt = 10*(s//10)
                spnd += bt
                s = (s//10) + (s-bt)

            spnd += s

            print(spnd)




