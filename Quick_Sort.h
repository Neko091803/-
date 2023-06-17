#ifndef QUICK_SORT_H
#define QUICK_SORT_h
#include "Sort.h"
#include <iostream>
#include <vector>

class Quick_Sort : public Sort {
    public:
    std::vector<int> sort(std::vector<int> list);
}