import numpy as np

gamma = np.load('after_train/gamma.npy')

print( gamma)
img_array = np.load('after_train/B.npy')

#print(img_array)
index = 0
f = open("after_train/B", "w")

for items in img_array:
    index = index + 1
    leng = len(items)
    item_index = 0
    for item in items:
        item_index = item_index + 1
        f.write(str(item))
        if item_index != leng:
            f.write('\t')
        #print(item, end =",") 
    if index != len(img_array):
        f.write('\n')
        
f.close()


img_array = np.load('after_train/Z.npy')

#print(img_array)
index = 0
f = open("after_train/Z", "w")

for items in img_array:
    index = index + 1
    leng = len(items)
    item_index = 0
    for item in items:
        item_index = item_index + 1
        f.write(str(item))
        if item_index != leng:
            f.write('\t')
        #print(item, end =",") 
    if index != len(img_array):
        f.write('\n')
        
f.close()


# print('\n')
# print(index)
# print(img_array)
# print(img_array[0])