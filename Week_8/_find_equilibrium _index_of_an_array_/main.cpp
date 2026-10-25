#include <iostream>

using namespace std;
using ll = long long;

void find_equil(int a[], int n){
    ll total = 0;
    for (int i = 0; i < n; ++i) total += a[i];

    ll right_sum = 0;
    bool found = false;

    for (int i = n - 1; i >= 0; --i){
        ll left_sum = total - a[i] - right_sum;

        if (left_sum == right_sum){
            cout << "Equilibrium index: " << i << '\n';
            found = true;
        }
        right_sum += a[i];
    }

    if (!found) cout << "Not found!\n";
}

int main(){
    int a[] = {0, -3, 5, -4, -2, 3, 1, 0};
    int n = sizeof(a) / sizeof(a[0]);
    find_equil(a, n);
    return 0;
}
