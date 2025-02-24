#include<iostream>
int main(){
int x;
cin>>x;
int rev=0;
while(x!=0){
        int d=x%10;
         x/=10;
         
         if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && d > 7)) return 0;
         if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && d < -8)) return 0;
         rev=rev*10+d;
     }
     cout<<rev;
    }
