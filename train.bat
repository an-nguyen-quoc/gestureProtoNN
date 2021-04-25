@echo run training

cd ./GesturePod/training
python generateFeatures.py
del "G:\2021\Lab\Final_Project\OneDrive - Hanoi University of Science and Technology\Final_Project\source_code\source_code\gestureProtoNN\training\gesture\in\*" /s /f /q
del "G:\2021\Lab\Final_Project\OneDrive - Hanoi University of Science and Technology\Final_Project\source_code\source_code\gestureProtoNN\training\gesture\out\*" /s /f /q
move "_train.csv" "G:\2021\Lab\Final_Project\OneDrive - Hanoi University of Science and Technology\Final_Project\source_code\source_code\gestureProtoNN\training\gesture\in\"
move "_test.csv" "G:\2021\Lab\Final_Project\OneDrive - Hanoi University of Science and Technology\Final_Project\source_code\source_code\gestureProtoNN\training\gesture\in\"

cd "G:\2021\Lab\Final_Project\OneDrive - Hanoi University of Science and Technology\Final_Project\source_code\source_code\gestureProtoNN\training"

python "csvtoSVM.py" "gesture\in\_train.csv" "gesture\in\train.txt" 0 1
python "csvtoSVM.py" "gesture\in\_test.csv" "gesture\in\test.txt" 0 1

python process_usps.py

python protoNN_example.py -d "gesture\in" -o "gesture\out" -l 8 -p 20
del "G:\2021\Lab\Final_Project\OneDrive - Hanoi University of Science and Technology\Final_Project\source_code\source_code\gestureProtoNN\GesturePod\training\after_train\*" /s /f /q

move "G:\2021\Lab\Final_Project\OneDrive - Hanoi University of Science and Technology\Final_Project\source_code\source_code\gestureProtoNN\training\gesture\out\*" "G:\2021\Lab\Final_Project\OneDrive - Hanoi University of Science and Technology\Final_Project\source_code\source_code\gestureProtoNN\GesturePod\training\after_train"

cd "G:\2021\Lab\Final_Project\OneDrive - Hanoi University of Science and Technology\Final_Project\source_code\source_code\gestureProtoNN\GesturePod\training"

python "readnpy.py"
python "readnpy - Copy.py" > tmpFile
set /p myvar= < tmpFile 
del tmpFile 
echo %myvar%

python genDataHeader.py %myvar%
pause