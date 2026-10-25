#include <iostream>

using namespace std;

int binary_search(int a[], int n, int target){
    int left = 0;
    int right = n - 1;

    while (left <= right){
        int mid = (left + right) / 2;

        if (a[mid] == target) return mid;
        if (a[mid] < target) left = mid + 1;
        else right = mid - 1;
    }

    return -1;
}

int main(){
    int a[] = {2, 3, 5, 7, 9};
    int target = 7;
    int res = binary_search(a, sizeof(a) / sizeof(a[0]), target);
    if (res != -1) cout << "Found at index: " << res << '\n';
    else cout << "Not found!\n";
    return 0;
}
