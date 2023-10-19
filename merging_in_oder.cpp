#include <iostream>
#include <vector>

// Function to merge two sorted arrays
std::vector<int> mergeArrays(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    std::vector<int> merged;
    int i = 0, j = 0;

    // Merge the two arrays in ascending order
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }
    }

    // Append the remaining elements (if any) from both arrays
    while (i < arr1.size()) {
        merged.push_back(arr1[i]);
        i++;
    }
    while (j < arr2.size()) {
        merged.push_back(arr2[j]);
        j++;
    }

    return merged;
}

int main() {
    // Sample arrays (assumed to be sorted)
    std::vector<int> arr1 = {1, 3, 5, 7, 9};
    std::vector<int> arr2 = {2, 4, 6, 8, 10};

    std::vector<int> mergedArray = mergeArrays(arr1, arr2);

    // Print the merged array
    for (int num : mergedArray) {
        std::cout << num << " ";
    }

    return 0;
}
