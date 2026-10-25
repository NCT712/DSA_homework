#include <iostream>
#include <algorithm>
#include "merge_sort.h"

using namespace std;
using ll = long long;

void findPair(int a[], int n, ll target){
    MergeSort(a, 0, n - 1);
    int left = 0;
    int right = n - 1;

    while (left < right){
        if (a[left] + a[right] == target) {
            cout << "Pair found: (" << a[left] << ", " << a[right] << ")\n";
            return;
        }
        if (a[left] + a[right] < target) ++left;  
        else --right; 
    }

    cout << "Pair not found\n";
}

int main(){
    int a[] = { 8, 7, 2, 5, 3, 1 };
    int target = 10;
    int n = sizeof(a)/sizeof(a[0]);
    findPair(a, n, target);
    return 0;
}
