#include "Bubble_Sort.h"
#include <iostream>
#include <vector>

using namespace std;

int main(void) {

    BubbleSort bb;
    vector<int> numbers = {1, 6, 5, 3, 9, 8, 4};
    numbers = bb.sort(numbers);
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " "<< endl;
    }

    return 0;
}