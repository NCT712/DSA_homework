#include <iostream>

using namespace std;

void SelectionSort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
            if (a[j] < a[min]) min = j;
        }
        int t = a[i];
        a[i] = a[min];
        a[min] = t;
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
    SelectionSort(a, n);
    Output(a, n);
}