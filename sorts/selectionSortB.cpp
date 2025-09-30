#include "selectionSortB.h"
#include <vector>

void selectionSortB(std::vector<int> &ar){
    int n = ar.size();
    for (int i = 0; i < n - 1; i++){
        int minIndex = i;
        for (int j = i + 1; j < n; j++){
            if (ar[j] < ar[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            std::swap(ar[i], ar[minIndex]);
        }
    }
}