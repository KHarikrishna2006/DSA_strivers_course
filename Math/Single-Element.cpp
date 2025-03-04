#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int>nums={4,2,1,2,1};
    int element=0;
    for(int i=0;i<nums.size();i++){
         element^=nums[i];
    }
    cout<<element;
}
