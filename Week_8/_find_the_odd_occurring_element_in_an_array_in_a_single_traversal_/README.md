# Find the odd occurring element in an array in a single traversal

## A. Đề bài

Cho một mảng số nguyên có đúng 1 giá trị xuất hiện số lần lẻ, các giá trị còn lại đều xuất hiện số lần chẵn. Tìm giá trị xuất hiện số lần lẻ đó.

---

## B. Ý tưởng

- Khởi tạo giá trị cần tìm `res = 0`.
- Duyệt mảng một lần, thực hiện phép XOR của `res`với từng phần tử `a[i]`.
- Vì `x ^ x = 0` và `x ^ 0 = x`, các giá trị xuất hiện với số lần chẵn sẽ triệt tiêu nhau.
- Sau vòng lặp, `res` trả về giá trị cần tìm.

---

## C. Test Cases

### Test Case 1:

- **Input**:

  ```cpp
  int a[] = {2, 7, 2, 9, 9};
  ```

- **Output**:

  ```text
  Odd occurring element: 7
  ```

### Test Case 2:

- **Input**:

  ```cpp
  int a[] = {5, 3, 5, 3, 5};
  ```

- **Output**:

  ```text
  Odd occurring element: 5
  ```

### Test Case 3:

- **Input**:

  ```cpp
  int a[] = {0, 4, 0, 4, 0};
  ```

- **Output**:

  ```text
  Odd occurring element: 0
  ```

### Test Case 4:

- **Input**:

  ```cpp
  int a[] = {-6, 2, -6, 2, -6};
  ```

- **Output**:

  ```text
  Odd occurring element: -6
  ```

### Test Case 5:

- **Input**:

  ```cpp
  int a[] = {6, 1, 6, 1, 1, 6, 1};
  ```

- **Output**:

  ```text
  Odd occurring element: 6
  ```
