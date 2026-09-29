#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void TowerOfHanoi(int n, char nguon, char tam, char dich) {
    // Mảng lưu tên các cọc
    char coc[3] = {nguon, tam, dich};

    // Ban đầu tất cả các đĩa đang ở chỉ số cọc nguồn 
    vector<int> vitri(n + 1, 0);

    // Tính tổng số bước trong bài toán
    int so_buoc = pow(2, n) - 1; 

    for (int i = 1; i <= so_buoc; i++) {
        // B1. Tìm vị trí của đĩa cần di chuyển
        int dia = 1;
        int temp_i = i;
        while (temp_i % 2 == 0) {
            dia++;
            temp_i /= 2;
        }

        // B2. Xác định đường di chuyển của đĩa
        int step = ((n - dia) % 2 == 0) ? 2 : 1;
        int nguon_moi = vitri[dia];
        int dich_moi = (nguon_moi + step) % 3;
        vitri[dia] = dich_moi;

        // B3. In ra bước di chuyển
        cout << " Chuyen dia " << dia << " tu coc " << coc[nguon_moi] << " sang coc " << coc[dich_moi] << endl;
    }
}

int main() {
    int n;
    cout << "Nhap so dia: ";
    cin >> n;
    TowerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}