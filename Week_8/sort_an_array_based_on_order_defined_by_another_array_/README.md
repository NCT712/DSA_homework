# Sort an array based on order defined by another array

## A. Đề bài

Cho hai mảng số nguyên, hãy sắp xếp lại các phần tử của mảng thứ nhất theo thứ tự các phần tử được xác định bởi mảng thứ hai.
Các phần tử không có trong mảng thứ hai nhưng có trong mảng thứ nhất sẽ được thêm vào cuối theo thứ tự đã sắp xếp. 

---

## B. Ý tưởng

- Dùng mảng băm `freq` để đếm số lần xuất hiện của mỗi giá trị trong mảng thứ nhất `first`.
- Duyệt mảng thứ hai `second`, ghi từng giá trị vào `first` rồi xóa giá trị đó khỏi mảng băm.
- Ghi các phần tử còn lại trong mảng băm vào cuối mảng `first`.
- Dùng hàm Merge Sort để sắp xếp tăng dần các phần tử cuối vừa thêm.

---

## C. Test Cases

### Test Case 1:

- **Input**:

  ```cpp
  int first[] = {4, 2, 7, 4, 1, 2, 9};
  int second[] = {2, 4, 7};
  ```

- **Output**:

  ```text
  2 2 4 4 7 1 9
  ```

### Test Case 2:

- **Input**:

  ```cpp
  int first[] = {6, 3, 6, 2, 5};
  int second[] = {8, 6, 9};
  ```

- **Output**:

  ```text
  6 6 2 3 5
  ```

### Test Case 3:

- **Input**:

  ```cpp
  int first[] = {0, -3, 4, -3, 2, 0};
  int second[] = {-3, 0, 2};
  ```

- **Output**:

  ```text
  -3 -3 0 0 2 4
  ```

### Test Case 4:

- **Input**:

  ```cpp
  int first[] = {7, 2, 5, 1};
  int second[] = {8, 6, 9};
  ```

- **Output**:

  ```text
  1 2 5 7
  ```

### Test Case 5:

- **Input**:

  ```cpp
  int first[] = {5, 2, 8, 5, 2, 8};
  int second[] = {8, 5, 2};
  ```

- **Output**:

  ```text
  8 8 5 5 2 2
  ```
