# Segregate positive and negative integers in linear time

## A. Đề bài

Cho một mảng gồm các số nguyên âm và dương. Đưa tất cả số âm về đầu mảng, các số dương về cuối mảng.

---

## B. Ý tưởng

Sử dụng cách phân hoạch của Quick Sort với mốc so sánh là `0`.

- Khởi tạo `pos = 0` để lưu vị trí đặt số âm tiếp theo.
- Duyệt mảng từ trái sang phải. Nếu `a[i] < 0`, đổi chỗ `a[i]` với `a[pos]`, rồi tăng `pos`.

---

## C. Test Cases

### Test Case 1:

- **Input**:

  ```cpp
  int a[] = {4, -1, 7, -5, 2, -3};
  ```

- **Output**:

  ```text
  -1 -5 -3 4 2 7
  ```

### Test Case 2:

- **Input**:

  ```cpp
  int a[] = {6, 2, 9, 4};
  ```

- **Output**:

  ```text
  6 2 9 4
  ```

### Test Case 3:

- **Input**:

  ```cpp
  int a[] = {-4, -9, -1, -6};
  ```

- **Output**:

  ```text
  -4 -9 -1 -6
  ```

### Test Case 4:

- **Input**:

  ```cpp
  int a[] = {-2, -7, 8, 3, 1};
  ```

- **Output**:

  ```text
  -2 -7 8 3 1
  ```

### Test Case 5:

- **Input**:

  ```cpp
  int a[] = {5, 8, 1, -2, -4};
  ```

- **Output**:

  ```text
  -2 -4 1 5 8
  ```
