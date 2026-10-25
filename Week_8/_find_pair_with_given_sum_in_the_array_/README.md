# Find a pair with the given sum in an array
## A. Đề bài

Cho một mảng số nguyên chưa sắp xếp và giá trị `target`. Tìm một cặp phần tử ở **hai vị trí khác nhau** có tổng bằng `target`. Nếu có nhiều cặp, chỉ cần in một cặp.

---

## B. Ý tưởng

Sắp xếp mảng tăng dần. Đặt `left = 0` và `right = n - 1` ở hai đầu mảng.

Trong khi `left < right`, so sánh tổng `a[left] + a[right]` với `target`:

- Nếu bằng `target`: in cặp tìm được và kết thúc.
- Nếu nhỏ hơn `target`: tăng `left` để tăng tổng.
- Nếu lớn hơn `target`: giảm `right` để giảm tổng.

Nếu vòng lặp kết thúc mà chưa tìm thấy cặp, in `Pair not found`.

---

## C. Test Cases

### Test Case 1: 

- **Input**:

  ```cpp
  int a[] = {11, 4, 9, 2, 6, 15};
  int target = 17;
  ```

- **Output**:

  ```text
  Pair found: (2, 15)
  ```

### Test Case 2: 

- **Input**:

  ```cpp
  int a[] = {12, 1, 7, 4, 16};
  int target = 22;
  ```

- **Output**:

  ```text
  Pair not found
  ```

### Test Case 3: 

- **Input**:

  ```cpp
  int a[] = {-8, 5, -3, 12, 1};
  int target = -11;
  ```

- **Output**:

  ```text
  Pair found: (-8, -3)
  ```

### Test Case 4: 

- **Input**:

  ```cpp
  int a[] = {13, 0, 6, 4, -2};
  int target = 6;
  ```

- **Output**:

  ```text
  Pair found: (0, 6)
  ```

### Test Case 5: 

- **Input**:

  ```cpp
  int a[] = {9, 4, 1, 4, 12};
  int target = 8;
  ```

- **Output**:

  ```text
  Pair found: (4, 4)
  ```
