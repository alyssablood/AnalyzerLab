//
// Created by alyss on 10/6/2024.
//

#include <iostream>
#include <vector>
#include <string>
#include <chrono>

// Assuming these functions are defined elsewhere
std::vector<std::string> get_data();
int linear_search(const std::vector<std::string>& container, const std::string& element);
int binary_search(const std::vector<std::string>& container, const std::string& element);

int main() {
    std::vector<std::string> dataset = get_data();

    // Test 1: Linear search for 'not_here'
    auto timer_init = std::chrono::high_resolution_clock::now();
    int not_here_test1 = linear_search(dataset, "not_here");
    auto timer_end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = timer_end - timer_init;
    std::cout << "Index: Linear, not_here = " << not_here_test1 << std::endl;
    std::cout << "Time: Linear, not_here = " << elapsed.count() << " seconds" << std::endl;

    // Test 2: Binary search for 'not_here'
    timer_init = std::chrono::high_resolution_clock::now();
    int not_here_test2 = binary_search(dataset, "not_here");
    timer_end = std::chrono::high_resolution_clock::now();
    elapsed = timer_end - timer_init;
    std::cout << "Index: Binary, not_here = " << not_here_test2 << std::endl;
    std::cout << "Time: Binary, not_here = " << elapsed.count() << " seconds" << std::endl;

    // Test 3: Linear search for 'mzzzz'
    timer_init = std::chrono::high_resolution_clock::now();
    int mzzzz_test1 = linear_search(dataset, "mzzzz");
    timer_end = std::chrono::high_resolution_clock::now();
    elapsed = timer_end - timer_init;
    std::cout << "Index: Linear, mzzzz = " << mzzzz_test1 << std::endl;
    std::cout << "Time: Linear, mzzzz = " << elapsed.count() << " seconds" << std::endl;

    // Test 4: Binary search for 'mzzzz'
    timer_init = std::chrono::high_resolution_clock::now();
    int mzzzz_test2 = binary_search(dataset, "mzzzz");
    timer_end = std::chrono::high_resolution_clock::now();
    elapsed = timer_end - timer_init;
    std::cout << "Index: Binary, mzzzz = " << mzzzz_test2 << std::endl;
    std::cout << "Time: Binary, mzzzz = " << elapsed.count() << " seconds" << std::endl;

    // Test 5: Linear search for 'aaaaa'
    timer_init = std::chrono::high_resolution_clock::now();
    int aaaaa_test1 = linear_search(dataset, "aaaaa");
    timer_end = std::chrono::high_resolution_clock::now();
    elapsed = timer_end - timer_init;
    std::cout << "Index: Linear, aaaaa = " << aaaaa_test1 << std::endl;
    std::cout << "Time: Linear, aaaaa = " << elapsed.count() << " seconds" << std::endl;

    // Test 6: Binary search for 'aaaaa'
    timer_init = std::chrono::high_resolution_clock::now();
    int aaaaa_test2 = binary_search(dataset, "aaaaa");
    timer_end = std::chrono::high_resolution_clock::now();
    elapsed = timer_end - timer_init;
    std::cout << "Index: Binary, aaaaa = " << aaaaa_test2 << std::endl;
    std::cout << "Time: Binary, aaaaa = " << elapsed.count() << " seconds" << std::endl;

    return 0;
}
