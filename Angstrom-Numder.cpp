#include <iostream>
using namespace std;
int power(int n,int exponent){
    if(exponent==0)return 1;
    return n*power(n,exponent-1);
}
int main(){
    int n,k,count=0,c1=0;
    cin>>n;
    int te1=n,te2=n;
    while(te1!=0){
        c1++;
        te1=te1/10;
    }
    while(te2!=0){
   k=te2%10;
    count=count+(power(k,c1));
    te2=te2/10;
    }
    if(n==count)cout<<"It is angstrome number";
    else cout<<"It is not a angstrome number";
}