#include "quickSort.h"
#include <vector>

void quickSort(std::vector<int> &ar){
    quickSortHelper(ar, 0, ar.size() - 1);
}

void quickSortHelper(std::vector<int> &ar, int left, int right){
    if (left < right){
        int middle = partition(ar, left, right);
        quickSortHelper(ar, left, (middle - 1));
        quickSortHelper(ar, middle + 1, right);
    }
}

int partition(std::vector<int> &ar, int left, int right){
    int x = ar[right];
    int i = left - 1;
    for (int j = left; j <= right - 1; j++){
        if (ar[j] <= x){
            i = i + 1;
            std::swap(ar[i], ar[j]);
        }
    }
    std::swap(ar[i + 1], ar[right]);
    return i + 1;
}