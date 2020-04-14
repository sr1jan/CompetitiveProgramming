def sort(arr, type='a'):
    if type is 'a':
        for i in range(len(arr)-1):
            for j in range(i+1,len(arr)):
                if arr[i] > arr[j]:
                    arr[i], arr[j] = arr[j], arr[i]
    else:
        for i in range(len(arr)-1):
            for j in range(i+1,len(arr)):
                if arr[i] < arr[j]:
                    arr[i], arr[j] = arr[j], arr[i]


if __name__ == '__main__':
    print("ascending/descending(a/d)?: ", end='')
    t = input()
    print("array: ",end='')
    arr = list(input().strip().split())
    print("Before sort:", *(arr))
    sort(arr, t)
    print("After sort:", *(arr))
