from joblib import Memory
from sklearn.datasets import load_svmlight_file

def get_data():
    data = load_svmlight_file("./usps10/train.txt")
    return data[0], data[1]

X, y = get_data()
print(X[0])