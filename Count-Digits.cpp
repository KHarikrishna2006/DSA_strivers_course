#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
         int p=0,k,re=n,c=0;
        while(n!=0){
            k=n%10;
            if(k!=0 && re%k==0){
                c++;
            }
            n=n/10;
        }
        cout<<c;
}
