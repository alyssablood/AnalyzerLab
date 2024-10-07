//
// Lutfiyah Nawaz Mohammed and Alyssa Blood are partners
//
//



#include <iostream>
#include <vector>
#include <string>
//helps import the functions for the String data file
#include "StringData.h"


//Instead of a new file I added the function here to make it easier - Lutfiyah
int linear_search(const std::vector<std::string>& container, const std::string& element) {
    for (size_t index = 0; index < container.size(); ++index) {
        if (container[index] == element) {
            return index;
        }
    }
    return -1;
}

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
    //I used getStringData here to gain access to the string data
    std::vector<std::string> dataset = getStringData();


    // for all the tests i used the function systemTimeNanoseconds instead since it was given to us in the
    // StringData file so we don't get really small numbers with e and instead get it in milliseconds
    // instead of the one from the PDF
    // Test 1: Linear search for 'not_here'
    auto timer_init = systemTimeNanoseconds();
    int not_here_test1 = linear_search(dataset, "not_here");
    auto timer_end = systemTimeNanoseconds();
    long long elapsed_ns = timer_end - timer_init;
    std::cout << "Index: Linear, not_here = " << not_here_test1 << std::endl;
    std::cout << "Time: Linear, not_here = " << elapsed_ns << " milliseconds" << std::endl;

    // Test 2: Binary search for 'not_here'
    timer_init = systemTimeNanoseconds();
    int not_here_test2 = binary_search(dataset, "not_here");
    timer_end = systemTimeNanoseconds();
    elapsed_ns = timer_end - timer_init;
    std::cout << "Index: Binary, not_here = " << not_here_test2 << std::endl;
    std::cout << "Time: Binary, not_here = " << elapsed_ns << " milliseconds" << std::endl;

    // Test 3: Linear search for 'mzzzz'
    timer_init = systemTimeNanoseconds();
    int mzzzz_test1 = linear_search(dataset, "mzzzz");
    timer_end = systemTimeNanoseconds();
    elapsed_ns = timer_end - timer_init;
    std::cout << "Index: Linear, mzzzz = " << mzzzz_test1 << std::endl;
    std::cout << "Time: Linear, mzzzz = " << elapsed_ns << " milliseconds" << std::endl;

    // Test 4: Binary search for 'mzzzz'
    timer_init = systemTimeNanoseconds();
    int mzzzz_test2 = binary_search(dataset, "mzzzz");
    timer_end = systemTimeNanoseconds();
    elapsed_ns = timer_end - timer_init;
    std::cout << "Index: Binary, mzzzz = " << mzzzz_test2 << std::endl;
    std::cout << "Time: Binary, mzzzz = " << elapsed_ns << " milliseconds" << std::endl;

    // Test 5: Linear search for 'aaaaa'
    timer_init = systemTimeNanoseconds();
    int aaaaa_test1 = linear_search(dataset, "aaaaa");
    timer_end = systemTimeNanoseconds();
    elapsed_ns = timer_end - timer_init;
    std::cout << "Index: Linear, aaaaa = " << aaaaa_test1 << std::endl;
    std::cout << "Time: Linear, aaaaa = " << elapsed_ns << " milliseconds" << std::endl;

    // Test 6: Binary search for 'aaaaa'
    timer_init = systemTimeNanoseconds();
    int aaaaa_test2 = binary_search(dataset, "aaaaa");
    timer_end = systemTimeNanoseconds();
    elapsed_ns = timer_end - timer_init;
    std::cout << "Index: Binary, aaaaa = " << aaaaa_test2 << std::endl;
    std::cout << "Time: Binary, aaaaa = " << elapsed_ns << " milliseconds" << std::endl;

    return 0;
}