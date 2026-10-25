# Find the number of 1’s in a sorted binary array

## A. Đề bài

Cho một mảng nhị phân đã được sắp xếp, hãy đếm số lượng phần tử "1" trong mảng đó.

---

## B. Ý tưởng

Dùng đệ quy để đếm số `1` trong đoạn từ `left` đến `right`, bắt đầu với toàn bộ mảng.

- Nếu `a[right] == 0`, cả đoạn đều là `0`, trả về `0`.
- Nếu `a[left] == 1`, cả đoạn đều là `1`, trả về số phần tử trong đoạn.
- Nếu đoạn có cả `0` và `1`, chia đôi tại `mid = (left + right) / 2`, đệ quy đếm ở hai nửa rồi cộng kết quả.

---

## C. Test Cases

### Test Case 1:

- **Input**:

  ```cpp
  int a[] = {0, 0, 1, 1, 1};
  ```

- **Output**:

  ```text
  The total number of 1's present is 3
  ```

### Test Case 2:

- **Input**:

  ```cpp
  int a[] = {0, 0, 0, 0};
  ```

- **Output**:

  ```text
  The total number of 1's present is 0
  ```

### Test Case 3:

- **Input**:

  ```cpp
  int a[] = {1, 1, 1, 1, 1};
  ```

- **Output**:

  ```text
  The total number of 1's present is 5
  ```

### Test Case 4:

- **Input**:

  ```cpp
  int a[] = {0, 0, 0, 0, 0, 1};
  ```

- **Output**:

  ```text
  The total number of 1's present is 1
  ```

### Test Case 5:

- **Input**:

  ```cpp
  int a[] = {0, 1, 1, 1, 1, 1};
  ```

- **Output**:

  ```text
  The total number of 1's present is 5
  ```
