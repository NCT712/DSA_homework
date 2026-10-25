#include <iostream>

using namespace std;

int find_odd(int a[], int n){
    int res = 0;
    for (int i = 0; i < n; ++i){
        res ^= a[i];
    }
    return res ;
}

int main(){
    int a[] = {4, 3, 6, 2, 6, 4, 2, 3, 4, 3, 3};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Odd occurring element: " << find_odd(a, n) << '\n';
    return 0;
}
