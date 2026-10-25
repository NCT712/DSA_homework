#include <iostream>

using namespace std;

void move_zeros(int a[], int n){
    int pos = 0;
    for (int i = 0; i < n; i++){
        if (a[i] != 0) a[pos++] = a[i];
    }
    
    while (pos < n) a[pos++] = 0;

    for(int i = 0; i < n; i++) cout << a[i] << " ";
}

int main(){
    int a[] = {6, 0, 8, 2, 3, 0, 4, 0, 1};
    int n = sizeof(a) / sizeof(a[0]);
    move_zeros(a, n);
    return 0;
}
