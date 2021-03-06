# Copyright (c) Microsoft Corporation. All rights reserved.
# Licensed under the MIT license.
#
# Processing the USPS Data. It is assumed that the data is already
# downloaded.

import subprocess
import os
import numpy as np
from sklearn.datasets import load_svmlight_file
import sys
from helpermethods import preprocessData

def processData(workingDir, downloadDir):
    def loadLibSVMFile(file):
        data = load_svmlight_file(file)
        features = data[0]
        labels = data[1]
        retMat = np.zeros([features.shape[0], features.shape[1] + 1])
        retMat[:, 0] = labels
        retMat[:, 1:] = features.todense()
        return retMat

    path = workingDir + '/' + downloadDir
    path = os.path.abspath(path)
    trf = path + '/train.txt'
    tsf = path + '/test.txt'
    assert os.path.isfile(trf), 'File not found: %s' % trf
    assert os.path.isfile(tsf), 'File not found: %s' % tsf
    train = loadLibSVMFile(trf)
    test = loadLibSVMFile(tsf)
    np.save(path + '/train_unnormalized.npy', train)
    np.save(path + '/test_unnormalized.npy', test)
    _, _, x_train, y_train, x_test, y_test = preprocessData(train, test)

    y_ = np.expand_dims(np.argmax(y_train, axis=1), axis=1)
    train = np.concatenate([y_, x_train], axis=1)
    print(train[0])
    np.save(path + '/train.npy', train)
    y_ = np.expand_dims(np.argmax(y_test, axis=1), axis=1)
    test = np.concatenate([y_, x_test], axis=1)
    np.save(path + '/test.npy', test)
    print(test[0])


if __name__ == '__main__':
    # Configuration
    workingDir = './'
    downloadDir = 'gesture/in'
    # End config
    print("Processing data")
    processData(workingDir, downloadDir)
    print("Done")
