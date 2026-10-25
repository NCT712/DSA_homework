#include <iostream>
#include <unordered_map>
#include "merge_sort.h"

using namespace std;

void sort_by_order(int first[], int n, int second[], int m){
    unordered_map<int, int> freq;

    for (int i = 0; i < n; ++i) ++freq[first[i]];

    int index = 0;

    for (int i = 0; i < m; i++){
        while(freq[second[i]]){
            first[index++] = second[i];
            freq[second[i]]--;
        }
        freq.erase(second[i]);
    }

    int t = index;
    for (auto x : freq){
        while(x.second--) first[index++] = x.first;
    }
    MergeSort(first, t, n - 1);

    for(int i = 0; i < n; ++i) cout << first[i] << ' ';
}

int main(){
    int first[] = {5, 8, 9, 3, 5, 7, 1, 3, 4, 9, 3, 5, 1, 8, 4};
    int second[] = {3, 5, 7, 2};
    int n = sizeof(first) / sizeof(first[0]);
    int m = sizeof(second) / sizeof(second[0]);
    sort_by_order(first, n, second, m);
    return 0;
}
