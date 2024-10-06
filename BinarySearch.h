//
// Created by alyss on 10/6/2024.
//

#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

#include <iostream>
#include <vector>
#include <string>

int binary_search(const std::vector<std::string>& container, const std::string& element) {
    int left = 0;
    int right = container.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;  // Avoids overflow

        if (container[mid] == element) {
            return mid;
        } else if (container[mid] < element) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;  // Element not found
}

int main() {
    std::vector<std::string> container = {"apple", "banana", "cherry", "date", "fig"};
    std::string element = "cherry";
    int index = binary_search(container, element);
    std::cout << "Index of element: " << index << std::endl;
    return 0;
}


#endif //BINARYSEARCH_H