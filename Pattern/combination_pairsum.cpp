#include <iostream>

void findCombinations(int arr[], int n, int target, int start, int currentSum, int combination[], int k) {
    if (currentSum == target && k > 1) {
        std::cout << "Elements: ";
        for (int i = 0; i < k; ++i) {
            std::cout << combination[i] << (i == k-1 ? "" : ", ");
        }
        std::cout << " => Sum: " << currentSum << std::endl;
        return;
    }
    
    if (currentSum > target || start >= n) {
        return;
    }

    for (int i = start; i < n; ++i) {
        combination[k] = arr[i];
        findCombinations(arr, n, target, i + 1, currentSum + arr[i], combination, k + 1);
    }
}

int main() {
    int n, target;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int arr[n];
    int combination[n];

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Enter the target sum: ";
    std::cin >> target;

    findCombinations(arr, n, target, 0, 0, combination, 0);

    return 0;
}
