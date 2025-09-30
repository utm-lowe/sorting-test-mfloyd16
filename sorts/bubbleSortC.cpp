#include "bubbleSortC.h"
#include <vector>

void bubbleSortC(std::vector<int> &ar){
    int n = ar.size();
    bool swapped;
    do {
        swapped = false;
        for (int i = n - 1; 0 < i; i--){
            if (ar[i - 1] > ar[i]){
                std::swap(ar[i - 1], ar[i]);
                swapped = true;
            }
        }
    } while (swapped);
}