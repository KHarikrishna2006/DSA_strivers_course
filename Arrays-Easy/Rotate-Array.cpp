#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int>nums={1,2,3,4,5,3,4,5,4,4,2,3};
    int k=2;
for(int i=0;i<k;i++){
         int largestelement=nums.back();
            nums.insert(nums.begin()+0,largestelement);
            nums.pop_back();
        }
        for(int i:nums){
            cout<<i<<endl;
        }
    return 0;
}