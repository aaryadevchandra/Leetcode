# Medium
import numpy as np

arr = np.zeros(6, dtype=np.int8)

target = int(input('Enter target value: '))

flag = 0

result_arr = np.zeros(2, dtype=np.int8)

for x in range(0, len(arr)):
    arr[x] = int(input(f"Enter element {x + 1}: "))

for i in range(0, len(arr)):
    if flag == 0:
        if arr[i] == target:
            result_arr[0] = i
            flag = 1
    
    if i == 5 and flag == 0:
        result_arr[0], result_arr[1] = -1, -1

    else:
        if arr[i] == target:
            result_arr[1] = i

print(result_arr)