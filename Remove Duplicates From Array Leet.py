import numpy as np

arr = np.zeros(6, dtype=np.int8)
second_arr = []

for i in range(0, len(arr)):
    arr[i] = int(input(f'Enter element {i+1}: '))


# converting repeating elements to 0
for i in range(0, len(arr)):
    for j in range(i+1, len(arr)):
        if arr[i] == arr[j]:
            arr[j] = 0

# verifying conversion
print('Converted array is: ', arr)

# removing 0s from converted array

for i in range(0, len(arr)):
    if arr[i] != 0:
        second_arr.append(arr[i])

print(len(second_arr))