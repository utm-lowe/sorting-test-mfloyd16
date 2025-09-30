#include "insertionSort.h"
#include <vector>

void insertionSort(std::vector<int> &ar){
    int n = ar.size();
    for (int i = 1; i < n; i++){
        int key = ar[i];
        int j = i - 1;
        while (j >= 0 and ar[j] > key){
            ar[j + 1] = ar[j];
            j = j - 1;
        }
        ar[j + 1] = key;
    }
}