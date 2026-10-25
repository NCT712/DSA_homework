#include <iostream>
#include "merge_sort.h"

using namespace std;

void Max_product(int a[], int n){
    if (n < 2) return;

    MergeSort(a, 0, n - 1);
 
    if ((a[0] * a[1]) > (a[n - 1] * a[n - 2])) 
        cout << "Pair is: (" << a[0] << ", " << a[1] << ")" << endl;
    else 
        cout << "Pair is: (" << a[n - 1] << ", " << a[n - 2] << ")" << endl;
}

int main(){
    int a[] = {-10, -3, 5, 6, -2};
    int n = sizeof(a) / sizeof(a[0]);

    Max_product(a, n);
    return 0;
}
