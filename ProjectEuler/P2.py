fnum = 0
evenSUM = 2
num1, num2 = 1, 2
while True:
    fnum = num1 + num2
    num1 = num2
    num2 = fnum
    if fnum > 4000000:
        break
    # print(fnum)
    if fnum % 2 == 0:
        evenSUM += fnum
    continue

print(evenSUM)
