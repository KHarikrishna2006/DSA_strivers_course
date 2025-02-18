#include <iostream>
using namespace std;
int main() {
    int arr[5]={1,2,7,8,5};
    int max=arr[0];
        for(int i:arr){
            if(max<i){
                max=i;
            }
        }
       
        int second_max=arr[0];
        for(int i:arr){
            if(i<max  &&second_max<i){
                second_max=i;
            }
    
        }
        cout<<second_max;
}
      
