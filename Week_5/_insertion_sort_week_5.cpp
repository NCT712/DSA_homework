#include <iostream>

using namespace std;

void InsertionSort(int a[], int n){
    for(int i = 0; i < n; i++){
        int t = a[i];
        int j = i;
        while(j > 0 && a[j - 1] > t){
            a[j--] = a[j - 1];
        }
        a[j] = t;
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
    InsertionSort(a, n);
    Output(a, n);
}