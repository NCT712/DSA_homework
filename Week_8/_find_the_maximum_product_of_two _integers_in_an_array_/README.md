# Find the maximum product of two integers in an array

## A. Đề bài

Cho một dãy số nguyên, hãy tìm tích lớn nhất của hai số nguyên trong dãy đó.

---

## B. Ý tưởng

Sắp xếp mảng tăng dần bằng thuật toán Merge Sort.

So sánh:

- Tích của hai phần tử đầu tiên: `a[0] * a[1]`.
- Tích của hai phần tử cuối cùng: `a[n - 1] * a[n - 2]`.

In cặp có tích lớn hơn. Nếu hai tích bằng nhau, chương trình chọn cặp ở cuối mảng.

---

## C. Test Cases

### Test Case 1:

- **Input**:

  ```cpp
  int a[] = {4, 9, 2, 7, 3};
  ```

- **Output**:

  ```text
  Pair is: (9, 7)
  ```

### Test Case 2:

- **Input**:

  ```cpp
  int a[] = {-12, -8, 3, 5, 1};
  ```

- **Output**:

  ```text
  Pair is: (-12, -8)
  ```

### Test Case 3:

- **Input**:

  ```cpp
  int a[] = {-7, -2, -9, -4};
  ```

- **Output**:

  ```text
  Pair is: (-9, -7)
  ```

### Test Case 4:

- **Input**:

  ```cpp
  int a[] = {-5, 0, 2, 0};
  ```

- **Output**:

  ```text
  Pair is: (2, 0)
  ```

### Test Case 5:

- **Input**:

  ```cpp
  int a[] = {-8, -3, 4, 6, 1};
  ```

- **Output**:

  ```text
  Pair is: (6, 4)
  ```
