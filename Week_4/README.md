# Bài toán Tháp Hà Nội 

## A. Tên bài tập
**Cài đặt bài toán **Tháp Hà Nội (Tower of Hanoi)** theo cách đệ quy và khử đệ quy**

---


## B. Đề bài




- Cho **$n$** chiếc đĩa có kích thước khác nhau (được đánh số từ $1$ đến $n$, trong đó đĩa $1$ là đĩa nhỏ nhất và đĩa $n$ là đĩa lớn nhất).
- Có **3 cọc**:
  - **Cọc nguồn (`'A'`)**: Chứa toàn bộ $n$ đĩa ban đầu, xếp chồng lên nhau theo thứ tự đĩa nhỏ nằm trên đĩa lớn. 
  - **Cọc tạm (`'B'`)**: Cọc trung gian hỗ trợ xếp đĩa.
  - **Cọc đích (`'C'`)**: Nơi cần chuyển toàn bộ $n$ đĩa tới sao cho giữ nguyên thứ tự ban đầu.

- Biết mỗi lần chỉ được chuyển đúng một đĩa từ đỉnh của một cọc sang cọc khác.

---

## C1. Các bước thực hiện dùng đệ quy 

### 1. Ý tưởng
Bài toán xếp $n$ đĩa có thể được chia thành hai bài toán con cùng cấu trúc với quy mô $n - 1$ đĩa:
- **Bước 1**: Chuyển $n - 1$ đĩa nằm trên cùng từ cọc **nguồn** sang cọc **tạm**, mượn cọc **đích** làm trung gian.
- **Bước 2**: Chuyển đĩa thứ $n$ (đĩa lớn nhất hiện tại) trực tiếp từ cọc **nguồn** sang cọc **đích**.
- **Bước 3**: Chuyển $n - 1$ đĩa đang ở cọc **tạm** sang cọc **đích**, mượn cọc **nguồn** làm trung gian.



### 2. Điều kiện dừng 
Khi $n = 1$: Có đúng 1 chiếc đĩa, ta chuyển thẳng đĩa $1$ từ cọc nguồn sang cọc đích.

---


## C2. Các bước thực hiện không dùng đệ quy (khử đệ quy)

- Mảng `coc[3]` để lưu tên 3 cọc.
- Mảng động `vector<int> vitri` để lưu vị trí hiện tại của từng đĩa.
- Công thức $2^n - 1$ để xác định tổng số lần di chuyển.



-  Mỗi giá trị $i$ trong `for (int i = 1; i <= so_buoc; i++)` đại diện cho thứ tự của bước di chuyển hiện tại. 


### Thuật toán tìm đĩa cần di chuyên
- **Nếu $i$ là số lẻ**:  Vòng lặp `while` không chạy và giữ nguyên `dia = 1`.
- **Nếu $i$ là số chẵn**: Ta liên tục chia `i` cho 2 và tăng `dia` lên 1 cho đến khi `i` trở thành số lẻ. 

**Ví dụ:**
- $i = 1$: đĩa $1$.
- $i = 2$: đĩa $2$.
- $i = 3$: đĩa $1$..
- $i = 4$: đĩa $3$.

- $i = 8$: đĩa $4$.


 



### Xác định hướng di chuyển
```cpp
int step = ((n - dia) % 2 == 0) ? 2 : 1;
int nguon_moi = vitri[dia];
int dich_moi = (nguon_moi + step) % 3;
vitri[dia] = dich_moi;
```
- **Biến `step`**: xác định số bước và hướng di chuyển của đĩa:
  - Nếu `(n - dia) % 2 == 0` thì `step = 2`: Đĩa nhảy 2 bước (ví dụ từ cọc 0 sang cọc 2.
  - Nếu `(n - dia) % 2 != 0` thì `step = 1`: Đĩa nhảy 1 bước  sang cọc kế tiếp.
- **Cập nhật vị trí**:
  - `nguon_moi`: Lấy từ `vitri[dia]`, là cọc hiện tại của đĩa `dia`.
  - `dich_moi`: Cọc mới mà đĩa sẽ chuyển đến, tính bằng công thức `(nguon_moi + step) % 3`. 
  - `vitri[dia] = dich_moi`: Lưu lại đích mới của đĩa để phục vụ cho các bước di chuyển sau.



Ví dụ ($n = 3$):
- Ba cọc: `coc[0] = 'A'`, `coc[1] = 'B'`, `coc[2] = 'C'`.
- Tổng số bước: $2^3 - 1 = 7$ bước.
- Hướng di chuyển của từng đĩa:
  - Đĩa 1: $n - dia = 3 - 1 = 2$ (chẵn) $\to step = 2$ (nhảy 2 cọc: $A \to C \to B \to A$).
  - Đĩa 2: $n - dia = 3 - 2 = 1$ (lẻ) $\to step = 1$ (nhảy 1 cọc: $A \to B \to C \to A$).
  - Đĩa 3: $n - dia = 3 - 3 = 0$ (chẵn) $\to step = 2$ (nhảy 2 cọc: $A \to C$).



 ---

## D. Độ phức tạp thuật toán



Số lần di chuyển đĩa tối thiểu cho bài toán Tháp Hà Nội với $n$ đĩa luôn là:
$$2^n - 1$$
 

Do đó, độ phức tạp thời gian là:
  $$\mathcal{O}(2^n)$$
  
---

## E. Test Cases

### Test Case 1: $n = 0$ 

- **Input**:
  ```text
  0
  ```
- **Output**:
  ```text
 
  ```




### Test Case 2: $n = 1$

- **Input**:
  ```text
  1
  ```
- **Output**:
  ```text
  Chuyen dia 1 tu coc A sang coc C
  ```
### Test Case 3: $n = 2$

- **Input**:
  ```text
  2
  ```
- **Output**:
  ```text
  Chuyen dia 1 tu coc A sang coc B
  Chuyen dia 2 tu coc A sang coc C
  Chuyen dia 1 tu coc B sang coc C
  ```

### Test Case 4: $n = 3$

- **Input**:
  ```text
  3
  ```
- **Output**:
  ```text
  Chuyen dia 1 tu coc A sang coc C
  Chuyen dia 2 tu coc A sang coc B
  Chuyen dia 1 tu coc C sang coc B
  Chuyen dia 3 tu coc A sang coc C
  Chuyen dia 1 tu coc B sang coc A
  Chuyen dia 2 tu coc B sang coc C
  Chuyen dia 1 tu coc A sang coc C
  ```


  

### Test Case 5: $n = 4$

- **Input**:
  ```text
  4
  ```
- **Outputi**:
  ```text
  Chuyen dia 1 tu coc A sang coc B
  Chuyen dia 2 tu coc A sang coc C
  Chuyen dia 1 tu coc B sang coc C
  Chuyen dia 3 tu coc A sang coc B
  Chuyen dia 1 tu coc C sang coc A
  Chuyen dia 2 tu coc C sang coc B
  Chuyen dia 1 tu coc A sang coc B
  Chuyen dia 4 tu coc A sang coc C
  Chuyen dia 1 tu coc B sang coc C
  Chuyen dia 2 tu coc B sang coc A
  Chuyen dia 1 tu coc C sang coc A
  Chuyen dia 3 tu coc B sang coc C
  Chuyen dia 1 tu coc A sang coc B
  Chuyen dia 2 tu coc A sang coc C
  Chuyen dia 1 tu coc B sang coc C
  ```




