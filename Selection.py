arr = [3, 5, 4, 2, 6, 1]
print(arr)
n = len(arr)

for i in range(n-1):
    idx = i
    for j in range(i, n):
        if arr[idx] > arr[j]:
            idx = j

    arr[i], arr[idx] = arr[idx], arr[i]

for i in range(n):
    print(arr[i])
    