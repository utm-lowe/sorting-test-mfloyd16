#include "radixSort.h"
#include <vector>
#include <algorithm>
#include <iostream>

void radixSort(std::vector<int> &ar){
    int n = ar.size();
    int maxVal = *std::max_element(ar.begin(), ar.end());

    std::vector<int> output(n);

    for (int bit = 0; (maxVal >> bit) > 0; bit++) {
        int count[2] = {0, 0};

        // Count how many numbers have 0 or 1 at this bit
        for (int i = 0; i < n; i++) {
            int bitValue = (ar[i] >> bit) & 1;
            count[bitValue]++;
        }

        // Compute prefix sum (for stable sort)
        count[1] += count[0];

        // Place elements into output array (stable: go backwards)
        for (int i = n - 1; i >= 0; i--) {
            int bitValue = (ar[i] >> bit) & 1;
            output[--count[bitValue]] = ar[i];
        }

        // Copy back to original array
        ar = output;
    }
}