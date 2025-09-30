#ifndef MERGE
#define MERGE

#include <vector>

void mergeSort(std::vector<int> &ar);

void mergeSortHelper(std::vector<int> &ar, int left, int right);

void merge(std::vector<int> &ar, int left, int middle, int right);

#endif // MERGE