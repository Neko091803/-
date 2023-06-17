#include "Bubble_Sort.h"

std::vector<int> BubbleSort::sort(std::vector<int> list){
        int result = 0;
        while(result != list.size()-1){
            for(int i = 0; i < list.size() -1; i++){
                if (list[i] > list[i+1]){
                    swap(list[i], list[i+1]);
                }
                 else {
                        result ++;
                    }
            }
             if (result != list.size() - 1) {
            result = 0;
        }
        }
    return list;
}