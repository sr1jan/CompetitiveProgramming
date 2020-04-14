arr = [ [1,1,9,8], [2,3,10,8], [1,5,9,7], [5,1,2,2] ]
t_i = []
t_j = []
ans = []
i_i = [0,1,2,3]
pen = 0

for i in range(4):
    max = [0,0,0]
    if i not in t_i:
        for j in range(4):
            if j not in t_j:
                if max[0] < arr[i][j]:
                    max[0], max[1], max[2] = arr[i][j], i, j
        for k in range(4):
            if k not in t_i:
                if max[0] < arr[k][max[2]]:
                    max[0], max[1] = arr[k][max[2]], k
        for l in range(4):
            if l not in t_j:
                if max[0] < arr[max[1]][l]:
                    max[0], max[2] = arr[max[1]][l], l

        ans.append(max[0])
        t_i.append(max[1])
        t_j.append(max[2])
        i_i.remove(max[1])

for i in i_i:
    max = [0,0,0]
    for j in range(4):
        if j not in t_j:
            if max[0]<arr[i][j]:
                max[0], max[1], max[2] = arr[i][j], i, j

    if max[0] is not 0:
        ans.append(max[0])
        t_i.append(max[1])
        t_j.append(max[2])
        i_i.remove(max[1])
    else:
        pen += 1

print(ans)
for i,j in zip(t_i, t_j):
    print(i,j)

print("pen", pen)
