#include "selectionSortA.h"
#include <vector>

void selectionSortA(std::vector<int> &ar){
    int n = ar.size();
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (ar[j] < ar[i]) {
                std::swap(ar[j], ar[i]);
            }
        }
    }
}