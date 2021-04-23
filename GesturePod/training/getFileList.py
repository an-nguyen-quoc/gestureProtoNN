import glob

for name in glob.glob("data_files\\noise_data\\*.csv"):
    print("'" + name.replace('_labelled.csv', '.csv').replace('data_files\\noise_data\\', '') + "',")