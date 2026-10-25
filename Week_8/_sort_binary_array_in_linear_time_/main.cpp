#include <iostream>

using namespace std;

void sort_binary(int a[], int n){
    int nums_0 = 0;
    
    for (int i = 0; i < n; ++i){
        if (a[i] == 0) ++nums_0;
    }

    for (int i = 0; i < nums_0; ++i) a[i] = 0;
    for (int i = nums_0; i < n; ++i) a[i] = 1;
}

int main(){
    int a[] = {1, 0, 1, 0, 1, 0, 0, 1};
    int n = sizeof(a) / sizeof(a[0]);

    sort_binary(a, n);
    for (int i = 0; i < n; ++i) cout << a[i] << " ";
    return 0;
}
