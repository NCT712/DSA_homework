# Thuật toán sắp xếp Quick Sort và Merge Sort

## A. Tên bài tập

**Cài đặt 2 thuật toán sắp xếp Quick Sort và Merge Sort**

---

## B. Đề bài

- Cho một mảng gồm $n$ số nguyên.
- Yêu cầu: Sắp xếp mảng theo thứ tự **tăng dần** bằng hai thuật toán:
  - **Quick Sort**.
  - **Merge Sort**.
- **Input**:
  - Dòng 1: số nguyên $n$.
  - Dòng 2: $n$ phần tử cách nhau bởi dấu cách. Nếu $n = 0$, không cần nhập dòng này.
- **Output**: Mảng sau khi đã sắp xếp tăng dần, các phần tử cách nhau bởi dấu cách.

---

## C1. Các bước thực hiện Quick Sort

### 1. Ý tưởng

Quick Sort sử dụng phương pháp **chia để trị**: chọn một phần tử làm **pivot**, phân hoạch mảng quanh chốt rồi đệ quy sắp xếp hai phần còn lại.

- Chọn phần tử đầu tiên $a[l]$ làm pivot.
- Dùng hai chỉ số `i = l + 1` và `j = r` để duyệt từ hai phía:
  - Tăng `i` khi phần tử đang xét **nhỏ hơn hoặc bằng** pivot.
  - Giảm `j` khi phần tử đang xét **lớn hơn** pivot.
  - Nếu `i < j`, đổi chỗ `a[i]` và `a[j]` .
- Khi chia xong 2 phía, đổi chỗ pivot đến vị trí `p = j`:
  - Các phần tử bên trái **nhỏ hơn hoặc bằng** pivot.
  - Các phần tử bên phải **lớn hơn** pivot.
- Đệ quy sắp xếp hai đoạn $a[l...p-1]$ và $a[p+1...r]$.
- Dừng khi còn không quá 1 phần tử.

### 2. Cài đặt

```cpp
int Partition(int a[], int l, int r, int pivot){
    int i = l + 1;
    int j = r;
    while(i <= j){
        while(i <= r && a[i] <= pivot) i++;
        while(j >= l && a[j] > pivot) j--;
        if(i < j) swap(a[i], a[j]);
    }
    swap(a[l], a[j]);
    return j;
}

void QuickSort(int a[], int l, int r){
    if(l < r){
        int p = Partition(a, l, r, a[l]);
        QuickSort(a, l, p - 1);
        QuickSort(a, p + 1, r);
    }
}
```


---

## C2. Các bước thực hiện Merge Sort

### 1. Ý tưởng

Merge Sort cũng sử dụng phương pháp **chia để trị**: chia mảng thành hai nửa, sắp xếp từng nửa rồi **trộn** hai nửa đã sắp xếp thành một đoạn tăng dần.

- Tìm vị trí giữa `m = (l + r) / 2`.
- Đệ quy sắp xếp nửa trái $a[l..m]$ và nửa phải $a[m+1..r]$.
- Sao chép hai nửa đã sắp xếp vào hai mảng tạm `left` và `right`.
- So sánh hai phần tử đang xét ở đầu mỗi mảng tạm, đưa phần tử nhỏ hơn vào mảng ban đầu. 
- Khi một mảng tạm đã hết phần tử, copy toàn bộ phần còn lại của mảng kia vào mảng ban đầu.
- Dừng đệ quy khi đoạn đang xét có không quá một phần tử.

### 2. Cài đặt

```cpp
void Merge(int a[], int l, int m, int r){
    int n1 = m - l + 1;
    int n2 = r - m;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++){
        left[i] = a[l + i];
    }
    for (int j = 0; j < n2; j++){
        right[j] = a[m + 1 + j];
    }
    int cnt = l;
    int i = 0, j = 0;
    while(i < n1 && j < n2){
        if(left[i] <= right[j]){
            a[cnt++] = left[i];
            i++;
        }
        else{
            a[cnt++] = right[j];
            j++;
        }
    }
    while(i < n1) a[cnt++] = left[i++];
    while(j < n2) a[cnt++] = right[j++];
}

void MergeSort(int a[], int l, int r){
    if(l < r){
        int m = (l + r) / 2;
        MergeSort(a, l, m);
        MergeSort(a, m + 1, r);
        Merge(a, l, m, r);
    }
}
```


---

## D. Độ phức tạp thuật toán

### 1. Quick Sort

- **Trường hợp xấu nhất**: mỗi lần phân hoạch chỉ tách được pivot, phần còn lại có $n - 1$ phần tử. 
- Số phép so sánh **luôn** là: $$(n - 1) + (n - 2) + \dots + 1 = \frac{n(n - 1)}{2}$$

Do đó, độ phức tạp thời gian là:  $$\mathcal{O}(n^2)$$
  
### 2. Merge Sort

- Mỗi lần chia đoạn tạo ra hai nửa có kích thước gần bằng nhau, nên có khoảng $\log_2 n$ mức đệ quy.
- Tổng công việc trộn ở mỗi mức là $\mathcal{O}(n)$.

Do đó, độ phức tạp thời gian trong **mọi trường hợp** là:  $$\mathcal{O}(n \log n)$$

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
  