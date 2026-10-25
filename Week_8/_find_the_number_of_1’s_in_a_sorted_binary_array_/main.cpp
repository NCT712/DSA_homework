#include <iostream>

using namespace std;

int count_ones(int a[], int left, int right){
    if (a[right] == 0) return 0;

    if (a[left] == 1) return right - left + 1;

    int mid = (left + right) / 2;
    return count_ones(a, left, mid) + count_ones(a, mid + 1, right);
}

int main(){
    int a[] = {0, 0, 0, 0, 1, 1, 1};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "The total number of 1's present is " << count_ones(a, 0, n - 1) << '\n';
    return 0;
}
