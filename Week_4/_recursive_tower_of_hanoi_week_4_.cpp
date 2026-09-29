#include <iostream>

using namespace std;

void TowerOfHanoi(int n, char nguon, char tam , char dich) {
    if (n <= 0) return; 
    
    // Điều kiện dừng
    if (n == 1) {
        cout << "Chuyen dia 1 tu coc " << nguon << " sang coc " << dich << endl;
        return;
    }

    // B1. Chuyển n - 1 đĩa từ cọc nguồn sang cọc tạm
    TowerOfHanoi(n - 1, nguon, dich, tam);
    // B2. Chuyển đĩa còn lại từ cọc nguồn sang cọc đích
    cout << "Chuyen dia " << n << " tu coc " << nguon << " sang coc " << dich << endl;
    // B3. Chuyển n - 1 đĩa từ cọc tạm sang cọc đích
    TowerOfHanoi(n - 1, tam, nguon, dich);
}

int main() {
    int n;
    cout << "Nhap so dia: ";
    cin >> n;
    TowerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}
