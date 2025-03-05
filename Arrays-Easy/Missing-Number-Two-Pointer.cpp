#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& a, int N) {

    for (int i = 1; i <= N; i++) {
        bool found = false;  
        for (int j = 0; j < N - 1; j++) {
            if (a[j] == i) {
                found = true;  
                break;
            }
        }
        if (!found) {
            return i;
        }
    }
    return -1;
}


int main() {
    int N = 5;  
    vector<int> a = {1,3,4,5};  

 
    int ans = missingNumber(a, N);

 
    cout << "The missing number is: " << ans << endl;
    
    return 0;

 
}