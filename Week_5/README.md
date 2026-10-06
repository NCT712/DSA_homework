# Thuật toán sắp xếp Selection Sort và Insertion Sort

## A. Tên bài tập
**Cài đặt 2 thuật toán sắp xếp **Selection Sort** và **Insertion Sort****

---


## B. Đề bài

- Cho một mảng gồm **$n$** số nguyên.
- Yêu cầu: Sắp xếp mảng theo thứ tự **tăng dần** bằng hai thuật toán:
  - **Selection Sort**.
  - **Insertion Sort**.
- **Input**:
  - Dòng 1: số nguyên $n$.
  - Dòng 2: $n$ phần tử cách nhau bởi dấu cách.
- **Output**: Mảng sau khi đã sắp xếp tăng dần, các phần tử cách nhau bởi dấu cách.

---

## C1. Các bước thực hiện Selection Sort

### 1. Ý tưởng
Mảng được chia thành hai phần: **phần đã sắp xếp** (bên trái) và **phần chưa sắp xếp** (bên phải).
- Ở mỗi lượt $i$ (từ $0$ đến $n - 2$), ta **chọn** phần tử **nhỏ nhất** trong đoạn chưa sắp xếp.
- Đổi chỗ phần tử nhỏ nhất đó với $a[i]$.
- Sau lượt $i$, đoạn $a[0..i]$ đã được sắp xếp và chứa đúng $i + 1$ phần tử nhỏ nhất của mảng.



### 2. Cài đặt
```cpp
void SelectionSort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
            if (a[j] < a[min]) min = j;
        }
        int t = a[i];
        a[i] = a[min];
        a[min] = t;
    }
}
```





---


## C2. Các bước thực hiện Insertion Sort

### 1. Ý tưởng
Tương tự cách xếp bài trên tay: lần lượt lấy từng lá bài và **chèn** vào đúng vị trí trong phần bài đã xếp.

- Lần lượt lấy phần tử $a[i]$ ra (lưu vào biến tạm `t`).
- Dời các phần tử lớn hơn `t` trong đoạn đã sắp xếp sang phải **1 vị trí**.
- Chèn `t` vào vị trí trống vừa tạo ra.
- Sau lượt $i$, đoạn $a[0..i]$ đã được sắp xếp.



### 2. Cài đặt
```cpp
void InsertionSort(int a[], int n){
    for(int i = 0; i < n; i++){
        int t = a[i];
        int j = i;
        while(j > 0 && a[j - 1] > t){
            a[j--] = a[j - 1];
        }
        a[j] = t;
    }
}
```




## D. Độ phức tạp thuật toán

### 1. Selection Sort
- Số phép so sánh **luôn** là:
$$(n - 1) + (n - 2) + \dots + 1 = \frac{n(n - 1)}{2}$$


Do đó, độ phức tạp thời gian trong **mọi trường hợp** là:
  $$\mathcal{O}(n^2)$$

### 2. Insertion Sort
- **Trường hợp tốt nhất** (mảng đã sắp xếp tăng dần): chỉ tốn $n$ phép so sánh,
  $$\mathcal{O}(n)$$
- **Trường hợp xấu nhất** (mảng sắp xếp giảm dần): phần tử thứ $i$ phải dời $i$ lần, tổng cộng $\frac{n(n - 1)}{2}$ lần dời,
  $$\mathcal{O}(n^2)$$

Do đó, độ phức tạp thời gian trong **mọi trường hợp** là:
  $$\mathcal{O}(n^2)$$

## E. Test Cases
### Test Case 1:

- **Input**:
  ```text
  0
  ```
- **Output**:
  ```text

  ```


### Test Case 2:

- **Input**:
  ```text
  1
  7
  ```
- **Output**:
  ```text
  7
  ```

### Test Case 3:

- **Input**:
  ```text
  5
  1 2 3 4 5
  ```
- **Output**:
  ```text
  1 2 3 4 5
  ```

### Test Case 4: 
- **Input**:
  ```text
  5
  5 4 3 2 1
  ```
- **Output**:
  ```text
  1 2 3 4 5
  ```

### Test Case 5:
- **Input**:
  ```text
  6
  3 -1 2 3 0 -1
  ```
- **Output**:
  ```text
  -1 -1 0 2 3 3
  ```

### Test Case 6:

- **Input**:
  ```text
  8
  64 25 12 22 11 90 5 37
  ```
- **Output**:
  ```text
  5 11 12 22 25 37 64 90
  ```

