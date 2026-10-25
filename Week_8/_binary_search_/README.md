# Binary Search Algorithm

## A. Đề bài
Cho một mảng n các số nguyên đã được sắp xếp và một giá trị cần tìm, hãy xác định xem giá trị cần tìm có tồn tại trong mảng hay không bằng thuật toán tìm kiếm nhị phân. 

---

## B. Ý tưởng

- Lấy phần tử đứng chính giữa đoạn đang xét tại vị trí `mid = (left + right) / 2`.
- Nếu `a[mid] < target`: tìm ở nửa bên phải bằng cách đặt `left = mid + 1`.
- Nếu `a[mid] > target`: tìm ở nửa bên trái bằng cách đặt `right = mid - 1`.

Tiếp tục chia đôi phạm vi mới cho đến khi tìm thấy. Nếu không tìm thấy, in `Not found!`.

---

## C. Test Cases

### Test Case 1:

- **Input**:

  ```cpp
  int a[] = {1, 4, 6, 8, 12};
  int target = 8;
  ```

- **Output**:

  ```text
  Found at index: 3
  ```

### Test Case 2:

- **Input**:

  ```cpp
  int a[] = {2, 5, 9, 14};
  int target = 7;
  ```

- **Output**:

  ```text
  Not found!
  ```

### Test Case 3:

- **Input**:

  ```cpp
  int a[] = {-8, -3, 0, 4, 9};
  int target = -8;
  ```

- **Output**:

  ```text
  Found at index: 0
  ```

### Test Case 4:

- **Input**:

  ```cpp
  int a[] = {3, 6, 10, 15, 21};
  int target = 21;
  ```

- **Output**:

  ```text
  Found at index: 4
  ```

### Test Case 5:

- **Input**:

  ```cpp
  int a[] = {-9, -4, 0, 2, 7};
  int target = 0;
  ```

- **Output**:

  ```text
  Found at index: 2
  ```
