# medium question
import numpy as np

# [[1, 1], [8, 2], [6, 3], [2, 4], [5, 5], [4, 6], [8, 7], [3, 8], [7, 9]]
# [[12, 1], [3, 2], [7, 3], [9, 4], [2, 5]]
arr = np.array([[1, 1], [8, 2], [6, 3], [2, 4], [5, 5], [4, 6], [8, 7], [3, 8], [7, 9]])

area = np.empty(50)
num = 0

for x in range(0, len(arr) - 1):
    for y in range(x + 1, len(arr)):
        width = arr[x][1] - arr[y][1]
        width = abs(width)
        if arr[x][0] > arr[y][0]:
            height = arr[y][0]
        else:
            height = arr[x][0]
        
        area[num] = width * height
        num = num + 1
temp = 0
for x in range(0, len(area)):
    for y in range(x+1, len(area)):
        if area[y] < area[x]:
            temp = area[y]
            area[y] = area[x]
            area[x] = temp

print(f"The container with the most volume has a volume = {area[-1]}")