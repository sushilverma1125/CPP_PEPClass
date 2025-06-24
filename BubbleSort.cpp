#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2, 1, 5, 3, 6};

    int n = arr.size();

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    cout << "Array after sorting is: ";
    for(int i : arr) {
        cout << i << " ";
    }

}

/*
Approach:

1. Start at the beginning of the list:
The algorithm begins by examining the first pair of adjacent elements. 

2. Compare and Swap:
If the elements are in the wrong order (e.g., in ascending order, the first element is greater than the second), they are swapped. 

3. Move to the next pair:
The algorithm proceeds to the next pair of adjacent elements and repeats the comparison and swapping process. 

4. Repeat until sorted:
This process is repeated for the entire list. After each pass, the largest element in the unsorted portion of the list will be in its correct sorted position (at the end for ascending order). 

5. Optimization:
In each pass, the algorithm can optimize by skipping the already sorted elements at the end of the list. 

Time Complexity:

Best Case:
O(n) - When the list is already sorted, the algorithm will only need to iterate through the list once to confirm that it is sorted. 

Average Case:
O(n²) - On average, the algorithm will need to iterate through the list multiple times, comparing and potentially swapping elements. 

Worst Case:
O(n²) - When the list is sorted in reverse order, the algorithm will need to iterate through the list the maximum number of times, performing the maximum number of swaps. 
*/