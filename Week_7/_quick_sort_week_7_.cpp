#include <iostream>

using namespace std;

int Partition(int a[], int l, int r, int pivot){
    int i = l + 1;
    int j = r;
    while(i <= j){
        while(i <= r && a[i] <= pivot) i++;
        while(j >= l && a[j] > pivot) j--;
        if(i < j) swap(a[i], a[j]);
    }
    swap(a[l], a[j]);
    return j;
}

void QuickSort(int a[], int l, int r){
    if(l < r){
        int p = Partition(a, l, r, a[l]);
        QuickSort(a, l, p - 1);
        QuickSort(a, p + 1, r);
    }
}

void Input(int a[], int n){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}

void Output(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}

int main(){
    int n; cin >> n;
    int a[n];
    Input(a, n);
    QuickSort(a, 0, n - 1);
    Output(a, n);
}