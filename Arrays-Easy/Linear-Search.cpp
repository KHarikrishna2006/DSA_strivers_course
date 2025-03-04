#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={1,2,3,4,5,9,15,36,54,34,35,8,46,7};
    int k=2,f=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==k){
            f=1;
            break;
        }
    }
    if(f==0){
    cout<<"Not-Found";
    }
    else{
        cout<<"Found";
    }
}
