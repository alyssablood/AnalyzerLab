//
// Created by alyss on 10/6/2024.
//

#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H

#include <iostream>
#include <vector>
#include <string>

int linear_search(const std::vector<std::string>& container, const std::string& element) {
    for (size_t index = 0; index < container.size(); ++index) {
        if (container[index] == element) {
            return index;
        }
    }
    return -1;
}

int main() {
    std::vector<std::string> container = {"apple", "banana", "cherry"};
    std::string element = "banana";
    int index = linear_search(container, element);
    std::cout << "Index of element: " << index << std::endl;
    return 0;
}

#endif //LINEARSEARCH_H