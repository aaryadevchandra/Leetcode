# medium question
import numpy as np

arr = np.array([[12, 1], [13, 2], [7, 3], [5, 4], [2, 5], [8, 6], [3, 7], [11, 8], [6, 9]])

area = np.empty(50)
num = 0


temp = 0
temp = int(temp)
for x in range(0, len(arr) - 1):
    for y in range(x + 1, len(arr)):
        width = arr[x][1] - arr[y][1]
        width = abs(width)
        if arr[x][0] > arr[y][0]:
            height = arr[y][0]
        else:
            height = arr[x][0]
        
        temp = width * height
        area = np.append(area, temp)

area = np.sort(area)

print(f"The container with the most volume has a volume = {np.amax(area)}")