#include "countingSort.h"
#include <vector>
#include <algorithm>

void countingSort(std::vector<int> &ar){
    int n = ar.size();
    int k = *std::max_element(ar.begin(), ar.end());

    std::vector<int> C(k + 1);
    std::vector<int> B(n);

    for (int i = 0; i < n; i++){
        C[ar[i]] = C[ar[i]] + 1;
    }

    for (int j = 1; j < k + 1; j++){
        C[j] = C[j - 1] + C[j];
    }

    for (int i = n - 1; i >= 0; i--){
        B[C[ar[i]] - 1] = ar[i];
        C[ar[i]] = C[ar[i]] - 1;
    }

    ar = B;
    
}