import numpy as np

img_array = np.load('raw_data/train.npy')
index = 0
for items in img_array:
    index = index + 1
    for item in items:
        print(item, end =",") 

print('\n')
print(index)
print(img_array)
print(img_array[0])