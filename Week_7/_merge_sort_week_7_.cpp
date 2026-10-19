#include <iostream>

using namespace std;

void Merge(int a[], int l, int m, int r){
    int n1 = m - l + 1;
    int n2 = r - m;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++){
        left[i] = a[l + i];
    }
    for (int j = 0; j < n2; j++){
        right[j] = a[m + 1 + j];
    }   
    int cnt = l;
    int i = 0, j = 0;
    while(i < n1 && j < n2){
        if(left[i] <= right[j]){
            a[cnt++] = left[i];
            i++;
        }
        else{
            a[cnt++] = right[j];
            j++;
        }
    }
    while(i < n1) a[cnt++] = left[i++];
    while(j < n2) a[cnt++] = right[j++];
}

void MergeSort(int a[], int l, int r){
    if(l < r){
        int m = (l + r) / 2;
        MergeSort(a, l, m);
        MergeSort(a, m + 1, r);
        Merge(a, l, m, r);
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
    MergeSort(a, 0, n - 1);
    Output(a, n);
}