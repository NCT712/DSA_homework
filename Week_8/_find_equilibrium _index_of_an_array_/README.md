# Find equilibrium index of an array

## A. Đề bài

Cho một mảng số nguyên, tìm tất cả chỉ số cân bằng (tổng các phần tử bên trái bằng tổng các phần tử bên phải), không tính phần tử tại chỉ số đang xét.

---

## B. Ý tưởng

- Tính tổng toàn bộ mảng, lưu vào `total`.
- Duyệt ngược mảng để tính tổng phải `right_sum`.
- Tính tổng bên trái `left_sum = total - a[i] - right_sum`.
- Nếu `left_sum == right_sum`, in chỉ số `i`.

Nếu không tìm thấy chỉ số cân bằng, in `Not found!`.

---

## C. Test Cases

### Test Case 1:

- **Input**:

  ```cpp
  int a[] = {2, 4, 3, 1, 5};
  ```

- **Output**:

  ```text
  Equilibrium index: 2
  ```

### Test Case 2:

- **Input**:

  ```cpp
  int a[] = {2, 5, 8, 1};
  ```

- **Output**:

  ```text
  Not found!
  ```

### Test Case 3:

- **Input**:

  ```cpp
  int a[] = {0, 4, -4, 0};
  ```

- **Output**:

  ```text
  Equilibrium index: 3
  Equilibrium index: 0
  ```

### Test Case 4:

- **Input**:

  ```cpp
  int a[] = {0, 0, 0};
  ```

- **Output**:

  ```text
  Equilibrium index: 2
  Equilibrium index: 1
  Equilibrium index: 0
  ```

### Test Case 5:

- **Input**:

  ```cpp
  int a[] = {-3, -2, -1, -5};
  ```

- **Output**:

  ```text
  Equilibrium index: 2
  ```
