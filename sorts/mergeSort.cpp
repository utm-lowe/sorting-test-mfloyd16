#include "mergeSort.h"
#include <vector>

void mergeSort(std::vector<int> &ar){
    mergeSortHelper(ar, 0, ar.size() - 1);
}

void mergeSortHelper(std::vector<int> &ar, int left, int right){
    if (left >= right){
        return;
    }
    int middle = (left + right) / 2;
    mergeSortHelper(ar, left, middle);
    mergeSortHelper(ar, middle + 1, right);
    merge(ar, left, middle, right);
}

void merge(std::vector<int> &ar, int left, int middle, int right){
    
    int newLeft = middle - left + 1;
    int newRight = right - middle;

    int leftAr[newLeft];
    int rightAr[newRight];

    for (int i = 0; i < newLeft; i++){
        leftAr[i] = ar[left + i];
    }
    for (int j = 0; j < newRight; j++){
        rightAr[j] = ar[middle + j + 1];
    }
    int i = 0, j = 0, k = left;
    while ((i < newLeft) and (j < newRight)){
        if (leftAr[i] <= rightAr[j]){
            ar[k] = leftAr[i];
            i = i + 1;
        } else {
            ar[k] = rightAr[j];
            j = j + 1;
        }
        k = k + 1;
    }
    while (i < newLeft){
        ar[k] = leftAr[i];
        i = i + 1;
        k = k + 1;
    }
    while (j < newRight){
        ar[k] = rightAr[j];
        j = j + 1;
        k = k + 1;
    }
}