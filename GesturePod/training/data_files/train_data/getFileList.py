import glob
import os

for name in glob.glob("*.csv"):
    # file = os.path.join('data_files', 'train_data', name)
    print("'" + name.replace('_labelled.csv', '.csv') + "',")