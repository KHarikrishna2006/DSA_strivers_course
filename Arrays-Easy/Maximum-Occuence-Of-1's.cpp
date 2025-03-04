#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums={1,0,1,1,0,1,1,1,0,1,1,1,1};
    int count=0,max=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else{
                if(max<count){
                    max=count;
                }
                count=0;
            }
              if(max<count){
                    max=count;
                }
        }
        cout<<max;
}
