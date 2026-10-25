# Sort binary array in linear time

## A. Đề bài

Cho một mảng chỉ gồm các số `0` và `1`. Sắp xếp mảng tăng dần sao cho tất cả số `0` đứng trước các số `1`, với thời gian tuyến tính và không gian bộ nhớ không đổi.

---

## B. Ý tưởng

- Duyệt mảng để đếm số phần tử bằng `0`, lưu vào biến `nums_0`.
- Gán `nums_0` phần tử đầu tiên của mảng bằng `0`.
- Gán các phần tử còn lại bằng `1`.
- In mảng sau khi sắp xếp.

---

## C. Test Cases

### Test Case 1: 

- **Input**:

  ```cpp
  int a[] = {1, 0, 1, 1, 0, 0, 1};
  ```

- **Output**:

  ```text
  0 0 0 1 1 1 1
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
  int a[] = {1, 1, 1, 1};
  ```

- **Output**:

  ```text
  1 1 1 1
  ```

### Test Case 4: 

- **Input**:

  ```cpp
  int a[] = {0, 0, 1, 1, 1};
  ```

- **Output**:

  ```text
  0 0 1 1 1
  ```

### Test Case 5:

- **Input**:

  ```cpp
  int a[] = {1, 1, 1, 0, 0, 0};
  ```

- **Output**:

  ```text
  0 0 0 1 1 1
  ```
