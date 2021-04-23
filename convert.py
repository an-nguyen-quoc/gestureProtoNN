import openpyxl
from openpyxl.xml.constants import MIN_ROW
import pandas as pd 
import glob
from openpyxl import Workbook
import os


for file in glob.glob(".\\d*.txt"):
    print(file)
    with open(file, 'r') as infile: 
        df = pd.read_table(file,sep=',',header=None)
        df.to_excel(file.replace('.txt', '.xlsx'), 'Sheet1', header=None, index=None, startrow=1, startcol=0)
        book = openpyxl.load_workbook(file.replace('.txt', '.xlsx'))
        sheet = book.active
        #Them header
        sheet['A1'] = 'millis'
        sheet['B1'] = 'Ngon_1'
        sheet['C1'] = 'Ngon_2'
        sheet['D1'] = 'Ngon_3'
        sheet['E1'] = 'Ngon_4'
        sheet['F1'] = 'Ngon_5'
        sheet['G1'] = 'X'
        sheet['H1'] = 'Y'
        sheet['I1'] = 'Z'
                            
        book.save(file.replace('.txt', '.xlsx'))
                
        
        
        
    