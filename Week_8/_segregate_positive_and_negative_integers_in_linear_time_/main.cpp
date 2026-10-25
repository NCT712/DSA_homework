#include <iostream>

using namespace std;

void swap(int& x, int& y){
    int t = x;
    x = y;
    y = t;
}

void segregate(int a[], int n){
    int pos = 0;

    for (int i = 0; i < n; ++i){
        if (a[i] < 0) swap(a[i], a[pos++]);
    }

    for(int i = 0; i < n; ++i) cout << a[i] << " ";
}

int main(){
    int a[] = {9, -3, 5, -2, -8, -6, 1, 3};
    int n = sizeof(a) / sizeof(a[0]);
    segregate(a, n);
    return 0;
}
