#ifndef QUICK_H
#define QUICK_H

#include <vector>

void quickSort(std::vector<int> &ar);

void quickSortHelper(std::vector<int> &ar, int left, int right);

int partition(std::vector<int> &ar, int left, int right);

#endif // QUICK_H