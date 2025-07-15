arr = [1, 5, 4, 2, 6, 3]
print(arr)
n = len(arr)

for i in range(n):
    flag = False
    for j in range(n-i-1):
        if(arr[j] > arr[j+1]):
            arr[j], arr[j+1] = arr[j+1], arr[j]
            flag = True

    
    print(f"{i} iteration")

    if not flag:
        break

for i in range(n):
    print(arr[i])