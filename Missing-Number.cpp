#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums={1,0,3};
    int sum=0;
int sum2=0;
for(int j:nums){
    sum+=j;
}
for(int i=0;i<nums.size()+1;i++){
    sum2+=i;
}
cout<<sum2-sum;
}

