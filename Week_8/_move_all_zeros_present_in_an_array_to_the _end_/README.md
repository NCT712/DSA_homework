# Move all zeros present in an array to the end

## A. Đề bài

Cho một mảng số nguyên, đưa tất cả số `0` về cuối mảng và giữ nguyên thứ tự của các phần tử còn lại.

---

## B. Ý tưởng

- Khởi tạo `pos = 0` để lưu vị trí ghi phần tử tiếp theo.
- Duyệt mảng từ trái sang phải. Nếu phần tử khác `0`, ghi vào `a[pos]` rồi tăng `pos`.
- Sau khi duyệt xong, điền số `0` vào các vị trí còn lại từ `pos` đến cuối mảng.

---

## C. Test Cases

### Test Case 1:

- **Input**:

  ```cpp
  int a[] = {0, 7, 0, 3, 9, 0, 2};
  ```

- **Output**:

  ```text
  7 3 9 2 0 0 0
  ```

### Test Case 2:

- **Input**:

  ```cpp
  int a[] = {0, 0, 0, 0};
  ```

- **Output**:

  ```text
  0 0 0 0
  ```

### Test Case 3:

- **Input**:

  ```cpp
  int a[] = {5, -2, 8, 1};
  ```

- **Output**:

  ```text
  5 -2 8 1
  ```

### Test Case 4:

- **Input**:

  ```cpp
  int a[] = {0, -4, 6, 0, -1};
  ```

- **Output**:

  ```text
  -4 6 -1 0 0
  ```

### Test Case 5:

- **Input**:

  ```cpp
  int a[] = {3, 5, 0, 0};
  ```

- **Output**:

  ```text
  3 5 0 0
  ```
