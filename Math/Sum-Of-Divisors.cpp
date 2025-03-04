#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int c1,sum=0;
for(int i=1;i<=n;i++){
    c1=0;
    for(int j=1;j<=i;j++){
        if(i%j==0){
            c1=c1+j;
        }
    }
    sum=sum+c1;
}
cout<<sum;
}