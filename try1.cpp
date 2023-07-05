#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = {-1, 2, 4, 6, 8, 10};

    int target = 1;

    // Find the number equal to or less than the target
    auto it = std::lower_bound(numbers.begin(), numbers.end(), target);

    if (it != numbers.begin()) {
        // The number exists in the range
        // or the element less than the target exists
        --it;  // Decrement the iterator to get the number less than or equal to the target
        std::cout << "Number equal to or less than " << target << " is: " << *it << std::endl;
    } else {
        // The target is less than the smallest element in the range
        std::cout << "No number equal to or less than " << target << " exists in the range." << std::endl;
    }

    return 0;
}
