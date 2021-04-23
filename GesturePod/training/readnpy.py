import numpy as np

img_array = np.load('after_train/W.npy')
index = 0
f = open("after_train/W", "w")

row = 36
col = 8

for i in range(col):
    # index = index + 1
    # leng = len(img_array[i])
    # item_index = 0
    for j in range(row):
        # item_index = item_index + 1
        print(i , '- ' , j)
        # print(img_array[j][i] , end ="\t")
        f.write(str(img_array[j][i]))
        # index = np.where(item == maximum)
        if j != row-1:
            f.write('\t')
    if i != col - 1:
        f.write('\n')
f.close()
print('\n')
print(index)
print(img_array)
print(img_array[0])