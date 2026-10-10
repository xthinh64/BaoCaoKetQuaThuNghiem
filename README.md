# Báo cáo kết quả thử nghiệm

**Sinh viên thực hiện:** Tống Mai Xuân Thịnh - 25521782

**Lớp:** IT003.R17

**Thời gian thực hiện:** 01/10/2026 - 10/10/2026

# Mục lục
[1. Yêu cầu](#1-yêu-cầu)

[2. Bảng số liệu thời gian](#2-bảng-số-liệu-thời-gian)

[3. Biểu đồ thời gian thực hiên](#3-biểu-đồ-thời-gian-thực-hiện)

[4. Kết luận](#4-kết-luận)

## 1. Yêu cầu

1. Tạo bộ dữ liệu gồm 10 dãy, mỗi dãy khoảng 1 triệu số thực (ngẫu nhiên); dãy thứ nhất đã có thứ tự tăng dần, dãy thứ hai có thứ tự giảm dần, 8 dãy còn lại trật tự ngẫu nhiên;
2. Viết các chương trình sắp xếp dãy theo các thuật toán QuickSort, HeapSort, MergeSort và chương trình gọi hàm sort của C++;
3. Chạy thử nghiệm mỗi chương trình đã viết ở trên với bộ dữ liệu đã tạo, ghi nhận thời gian thực thi từng lần thử nghiệm
4. Viết báo cáo thử nghiệm: kết quả thử nghiệm ở dạng bảng dữ liệu và dạng biểu đồ; nhận xét kết quả thực nghiệm; báo cáo nộp bằng file PDF

## 2. Bảng số liệu thời gian 

| Dữ liệu | QuickSort | HeapSort | MergeSort | Sort (C++) |
| :-- | :-- | :-- | :-- | :-- |
| 1	| 207	| 1045	| 904	| 391 |
| 2	| 146	| 921	| 1893	| 297 |
| 3	| 369	| 2019	| 1178	| 488 |
| 4	| 452	| 1469	| 1259	| 483 |
| 5	| 338	| 1507	| 1055	| 477 |
| 6	| 334	| 1461	| 1386	| 479 |
| 7	| 370	| 1662	| 1344	| 488 |
| 8	| 329	| 1469	| 1025	| 486 |
| 9	| 329	| 1482	 |980	| 492 |
| 10	| 349	| 1606	|969	|498 |
| Trung bình | 332.3	| 1464.1 | 1199.3 | 457.9 |


## 3. Biểu đồ thời gian thực hiện 

- Test 1 đến test 5:
  
  <img width="1983" height="1158" alt="bieudo1" src="https://github.com/user-attachments/assets/2e9d05db-3241-4d7a-bc45-33f9d9408e0c" />

- Test 6 đến test 10:

  <img width="1983" height="1158" alt="bieudo2" src="https://github.com/user-attachments/assets/c0492448-c9fc-4475-a54f-099200e47bf6" />

## 4. Kết luận 

-	Nhóm chạy nhanh nhất (Quicksort và Sort) 🏃 : Quicksort cho tốc độ nhanh nhất trong các bài test, nhưng đòi hỏi phải chọn mốc (pivot) ở giữa mảng để không bị tràn bộ nhớ với dữ liệu đã sắp xếp. Trong khi đó, hàm sort có sẵn của C++ cho tốc độ cực kỳ ổn định và nhanh đều ở mọi loại dữ liệu.
-	Nhóm chạy chậm hơn (Mergesort và Heapsort) 🐢 : Hai thuật toán này tốn nhiều thời gian hơn hẳn. Mergesort bị trễ do quá trình chia mảng liên tục phải cấp phát và giải phóng bộ nhớ. Còn Heapsort thì cấu trúc cây nhị phân khiến việc truy xuất các số trong mảng bị nhảy, làm máy tính đọc dữ liệu chậm hơn.


