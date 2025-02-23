#include <iostream>
using namespace std;
int main(){
    int arr={1, 4, 3, 2, 6, 7}
int n=arr.size();
if(n<=1)return 0;
if(arr[0]==0)cout<<-1;

int maxReach = arr[0], steps = arr[0], jumps = 1;

for (int i = 1; i < n; i++) {
    if (i == n - 1) cout<<jumps;

    maxReach = max(maxReach, i + arr[i]);
    steps--;

    if (steps == 0) {
        jumps++;
        if (i >= maxReach) cout<<-1;
        steps = maxReach - i;
    }
}

cout<<-1;
}