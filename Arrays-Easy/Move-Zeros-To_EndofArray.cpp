#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {0,0,1};

    int j = 0;  
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }

  
    for (int i : nums) {
        cout<<i;
    }

    return 0;
}

    