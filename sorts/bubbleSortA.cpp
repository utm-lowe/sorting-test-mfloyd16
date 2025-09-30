#include "bubbleSortA.h"
#include <vector>

void bubbleSortA(std::vector<int> &ar){
    int n = ar.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if (ar[j] < ar[j - 1]) {
                std::swap(ar[j], ar[j - 1]);
            }
        }
    }
}