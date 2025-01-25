#include <iostream>
#include <vector>

int main() {
    // Initialize a vector
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    
    // Add elements
    numbers.push_back(6);
    
    // Access elements
    std::cout << "First element: " << numbers[0] << std::endl;
    
    // Iterate through vector
    for(const auto& num : numbers) {
        std::cout << num << " ";
    }
    
    return 0;
}