#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {2, 1, 5, 3, 6};

    int n = nums.size();

    for(int i = 1; i < nums.size() - 1; i++) {
        for(int j = i; j > 0; j--) {
            if(nums[j] < nums[j-1]) {
                swap(nums[j], nums[j-1]);
            }
        }
    }

    cout << "Array after sorting is: ";
    for(int i : nums) {
        cout << i << " ";
    }

}

/*
Approach:

1. Divide:
The algorithm divides the input array into two subarrays: a sorted subarray and an unsorted subarray. Initially, the first element is considered sorted.

2. Iterate:
The algorithm iterates through the unsorted subarray, taking one element at a time.

3. Insert:
For each element, it finds its correct position within the sorted subarray and inserts it there, shifting elements as needed to make space. 

Time Complexity:

Best Case: O(n)
- When the input array is already sorted, the algorithm only needs to iterate through the array once to verify it's sorted, resulting in linear time complexity.

Average Case: O(n^2)
- On average, the algorithm will need to compare and potentially shift elements in the sorted portion for each element in the unsorted portion.

Worst Case: O(n^2)
- When the input array is sorted in reverse order, the algorithm will need to perform the maximum number of comparisons and shifts for each element, resulting in quadratic time complexity. 
*/