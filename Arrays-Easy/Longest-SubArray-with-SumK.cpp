#include <bits/stdc++.h>

using namespace std;
int main(){
    vector<int> a={10, 5, 2, 7, 1, -10};
    int k=15;
unordered_map<int, int> prefixSumIndex; // Stores (prefix sum, first index)
int sum = 0, maxLen = 0;

for (int i = 0; i < a.size(); i++) {
    sum += a[i]; // Update prefix sum

    if (sum == k) 
        maxLen = i + 1; // If subarray from 0 to i has sum k

    if (prefixSumIndex.find(sum - k) != prefixSumIndex.end()) {
        maxLen = max(maxLen, i - prefixSumIndex[sum - k]);
    }

    if (prefixSumIndex.find(sum) == prefixSumIndex.end()) {
        prefixSumIndex[sum] = i; // Store first occurrence of sum
    }
}

cout<<maxLen;
}
