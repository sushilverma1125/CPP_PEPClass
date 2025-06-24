#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2, 3, 1, 6, 5};

    int n = arr.size();
    for(int i = 0; i < n - 1; i++) {
        int minEleIdx = i;
        for(int  j = i + 1; j < n - 1; j++) {
            if(arr[j] < arr[minEleIdx]) {
                swap(arr[j], arr[minEleIdx]);
            }
        }
    }
    
    cout << endl << "After sorting: ";
    for(int i : arr) {
        cout << i << " ";
    }
}

/*
Approach:

Divide into Sorted and Unsorted: The algorithm conceptually divides the input list into a sorted portion (initially empty) and an unsorted portion (the entire list).

Find the Minimum: In each iteration, it finds the smallest element in the unsorted portion.

Swap: It then swaps this smallest element with the first element of the unsorted portion, effectively extending the sorted portion by one element.

Repeat: This process is repeated until the entire list is sorted. 

Selection sort has a time complexity of O(n²) in all cases (best, average, and worst) and a space complexity of O(1) because it performs sorting in place. 
*/