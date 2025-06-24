// 2149. Rearrange Array Elements by Sign

#include <bits/stdc++.h>
using namespace std;


// Brute force
vector<int> rearrangeArray(vector<int>& arr) {
    vector<int> pos;
    vector<int> neg;
    
    int n = arr.size();
    
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] > 0) pos.push_back(arr[i]);
        else neg.push_back(arr[i]);
    }
    
    for(int i = 0; i < n/2; i++) {
        arr[2*i] = pos[i];
        arr[2*i+1] = neg[i];
    }
    
    return arr;
}

// Optimal Approach
vector<int> rearrangeArray(vector<int>& arr) {
    int posIndex = 0, negIndex = 1;
    int n = arr.size();
    
    vector<int> ans(n, 0);
    
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            ans[posIndex] = arr[i];
            posIndex += 2;
        } else {
            ans[negIndex]  = arr[i];
            negIndex += 2;
        }
    }
    return ans;
    
}

int main()
{
    vector<int> arr = {3,1,-2,-5,2,-4};
    
    cout << "Array is: " ;
    vector<int> res = rearrangeArray(arr);
    
    for(int num: res) {
        cout << num << " ";
    }
}