#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch)
{
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

// Brute force Approach - TLE 
// T.C O(n^2)
string sortVowels(string s)
{
    int n = s.length();

    for (int i = 0; i < n - 1; i++)
    {
        if (!isVowel(s[i]))
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (!isVowel(s[j]))
                continue;

            if (s[i] > s[j])
            {
                swap(s[i], s[j]);
            }
        }
    }
    return s;
}

// Optimal Approach
// T.C O(n log n)

string sortVowels(string s) {
    vector<int> vowelIndices;
    int n = s.length();

    for(int i = 0; i < n; i++) {
        if(isVowel(s[i])) {
            vowelIndices.push_back(i);
        }
    }

    for(int i = 0; i < vowelIndices.size(); i++) {
        for(int j = i + 1; i < vowelIndices.size(); i--) {
            if(s[vowelIndices[i]] > s[vowelIndices[j]]) {
                swap(s[vowelIndices[i]], s[vowelIndices[j]]);
            }
        }
    }
    return s;
}


int main() {
    string s1 = "lEetcOde";
    cout << sortVowels(s1) << endl;  // Output: lEOtcede

    string s2 = "lYmpH";
    cout << sortVowels(s2) << endl;  // Output: lYmpH

    return 0;
}