# gestureProtoNN

# CÁC BƯỚC TRAINING.

## Bước 1: Clone code từ git về:
    git clone https://github.com/an-nguyen-quoc/gestureProtoNN.git
## Bước 2:
Vào file gestureProtoNN/train.bat
Sửa tất cả các đường dẫn "G:\2021\Lab\Final_Project\OneDrive - Hanoi University of Science and Technology\Final_Project\source_code\source_code\gestureProtoNN"
thành đường dẫn tớ folder "gestureProtoNN"

#### Chú ý dòng 17:
    python protoNN_example.py -d "gesture\in" -o "gesture\out" -l 8 -p 100 -e 50

  thì l = 8 là số chiều dữ liệu sau khi giảm.
      p = 100 là số prototypes
      e = 50 là số lượng epochs.

  Các cậu có thể thay đổi thông số nếu muốn nhé.

## Bước 3: 
  Vào folder gestureProtoNN\GesturePod\training\data
  Sẽ thấy 3 thư mục: raw_data, labelled_data và extracted_data.
  Xóa hết những file trong extracted_data đi nhé.
  Rồi thêm những file đã gắn nhãn mọi người đã thu thêm vào folder labelled_data, nhớ thêm đuôi "_labelled.csv". Ví dụ: "toi.csv" sẽ đổi thành "toi_labelled.csv"

## Bước 4: 
  Vào folder gestureProtoNN\GesturePod\training\
  Tìm file generateFeatures.py. Mở file này lên.
  Tìm đến đoạn labelledFileList (dòng 25)
  thêm tên của những file các cậu đã gắn nhãn vào, chú ý bỏ chữ _labelled.

  Save file.

## Bước 5:
  Vẫn ở folder gestureProtoNN\GesturePod\training\
  Mở file: readnpy.py lên, chú ý dòng col = 8 (dòng thứ 8)
  Các cậu đặt col phải bằng l các cậu đặt ở bước 2. Tớ đang để col = l = 8;

## Bước 6:
  Vào folder gestureProtoNN\
  Ấn đúp vào train.bat. Và chờ nó chạy. Nếu thấy nó có chạy lệnh tương tự:
  python genDataHeader.py 0.015350475.
  thì là đúng, con số có thể khác.

## Bước 7: 
  Vào gestureProtoNN\GesturePod\training
  Copy file data.h vào trong folder "gestureProtoNN\GesturePod\onMKR1000\src"

  Sau đó vào folder gestureProtoNN\GesturePod\onMKR1000\
  Mở file onMKR1000.ino bằng Arduino.
  
  Sửa dòng 67: const int INDEX_MAX_LABEL = 6; bằng con số nhãn lớn nhất.

  Sửa dòng 128: const char *GESTURE_TO_COMMUNICATE[INDEX_MAX_LABEL] = {"", "", "tôi", "ăn", "i love you", "đi bộ"};
  bằng nhãn tương ứng với số nhãn đã gán.

  Nạp code và test thử.
